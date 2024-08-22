// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POCKETAPIBLOCKDELEGATE_H
#define POCKETAPIBLOCKDELEGATE_H

@class NSString;
@protocol PocketAPIDelegate;

#import <Foundation/Foundation.h>


@interface PocketAPIBlockDelegate : NSObject <PocketAPIDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *loginHandler; // ivar: loginHandler
@property (copy, nonatomic) id *responseHandler; // ivar: responseHandler
@property (copy, nonatomic) id *saveHandler; // ivar: saveHandler
@property (readonly) Class superclass;


+(id)delegateWithLoginHandler:(id)arg0 ;
+(id)delegateWithResponseHandler:(id)arg0 ;
+(id)delegateWithSaveHandler:(id)arg0 ;
-(void)dealloc;
-(void)pocketAPI:(id)arg0 failedToSaveURL:(id)arg1 error:(id)arg2 ;
-(void)pocketAPI:(id)arg0 hadLoginError:(id)arg1 ;
-(void)pocketAPI:(id)arg0 receivedResponse:(id)arg1 forAPIMethod:(id)arg2 error:(id)arg3 ;
-(void)pocketAPI:(id)arg0 savedURL:(id)arg1 ;
-(void)pocketAPILoggedIn:(id)arg0 ;


@end


#endif