// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3ACTIVETRANSACTION_H
#define ML3ACTIVETRANSACTION_H

@class NSLock, MSVXPCTransaction, NSUUID;
@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "ML3DatabaseConnection.h"
#import "ML3Client.h"
#import "ML3MusicLibrary.h"

@interface ML3ActiveTransaction : NSObject <NSLocking>

 {
    ML3DatabaseConnection *_connection;
    NSLock *_lock;
    MSVXPCTransaction *_xpcTransaction;
}


@property (readonly, nonatomic) ML3Client *client; // ivar: _client
@property (readonly, nonatomic) ML3DatabaseConnection *connection;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL inUseByOperation; // ivar: _inUseByOperation
@property (nonatomic) CGFloat lastUsedTime; // ivar: _lastUsedTime
@property (readonly, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (nonatomic) BOOL terminable; // ivar: _terminable


-(id)_relinquishConnection;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithLibrary:(id)arg0 connection:(id)arg1 client:(id)arg2 ;
-(void)lock;
-(void)unlock;
-(void)updateLastUsed;


@end


#endif