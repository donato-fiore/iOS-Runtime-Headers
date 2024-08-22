// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3CLIENTIMPORTSESSION_H
#define ML3CLIENTIMPORTSESSION_H

@class NSXPCConnection, NSString, NSProgress;
@protocol ML3ClientImportSessionXPCInterface, ML3ClientImportSessionDelegate;

#import <Foundation/Foundation.h>

#import "ML3ClientImportSessionConfiguration.h"

@interface ML3ClientImportSession : NSObject <ML3ClientImportSessionXPCInterface>

 {
    NSXPCConnection *_xpcClientConnection;
    id<ML3ClientImportSessionDelegate> *_delegate;
    ML3ClientImportSessionConfiguration *_sessionConfiguration;
    BOOL _hasActiveSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


-(BOOL)addItems:(id)arg0 ;
-(BOOL)cancel;
-(BOOL)finish;
-(BOOL)removeItems:(id)arg0 ;
-(BOOL)start;
-(BOOL)updateItems:(id)arg0 ;
-(id)_xpcClientConnection;
-(id)addItemsReturningResult:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 ;
-(id)removeItemsReturningResult:(id)arg0 ;
-(id)updateItemsReturningResult:(id)arg0 ;
-(void)sessionDidUpdateProgress:(float)arg0 ;
-(void)sessionFailedToAddItem:(id)arg0 completion:(id)arg1 ;
-(void)sessionFailedToRemoveItem:(id)arg0 completion:(id)arg1 ;
-(void)sessionFailedToUpdateItem:(id)arg0 completion:(id)arg1 ;


@end


#endif