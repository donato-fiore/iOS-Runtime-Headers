// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCLOUDAPPACCOUNT_H
#define WFCLOUDAPPACCOUNT_H

@class NSString;
@protocol CLAPIEngineDelegate;


#import "WFPasswordAccount.h"
#import "CLAPIEngine.h"

@interface WFCloudAppAccount : WFPasswordAccount <CLAPIEngineDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLAPIEngine *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)storageBehaviorForPropertyWithKey:(id)arg0 ;
+(id)localizedServiceName;
+(id)serviceID;
-(void)accountInformationRetrievalSucceeded:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)refreshWithCompletionHandler:(id)arg0 ;
-(void)requestDidFailWithError:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2 ;


@end


#endif