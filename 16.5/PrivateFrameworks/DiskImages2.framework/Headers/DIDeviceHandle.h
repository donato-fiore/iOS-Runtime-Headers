// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDEVICEHANDLE_H
#define DIDEVICEHANDLE_H

@class NSString, NSXPCListenerEndpoint;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>

#import "DIClient2IODaemonXPCHandler.h"

@interface DIDeviceHandle : NSObject <NSSecureCoding, NSCoding>



@property (copy) NSString *BSDName; // ivar: _BSDName
@property (retain, nonatomic) DIClient2IODaemonXPCHandler *client2IOhandler; // ivar: _client2IOhandler
@property (nonatomic) BOOL handleRefCount; // ivar: _handleRefCount
@property (readonly, nonatomic) NSUInteger regEntryID; // ivar: _regEntryID
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint; // ivar: _xpcEndpoint


+(BOOL)supportsSecureCoding;
-(BOOL)addToRefCountWithError:(*id)arg0 ;
-(BOOL)updateBSDNameWithBlockDevice:(id)arg0 error:(*id)arg1 ;
-(BOOL)waitForDeviceWithError:(*id)arg0 ;
-(BOOL)waitForQuietWithService:(unsigned int)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegEntryID:(NSUInteger)arg0 ;
-(id)initWithRegEntryID:(NSUInteger)arg0 xpcEndpoint:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif