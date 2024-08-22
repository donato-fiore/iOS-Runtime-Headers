// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIORIENTATIONREQUESTACTION_H
#define _UIORIENTATIONREQUESTACTION_H

@class BSAction;



@interface _UIOrientationRequestAction : BSAction

@property (readonly, nonatomic) NSUInteger policy;
@property (readonly, nonatomic) NSUInteger requestedInterfaceOrientationMask;


-(NSInteger)UIActionType;
-(id)initWithRequestedInterfaceOrientationMask:(NSUInteger)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(id)initWithRequestedInterfaceOrientationMask:(NSUInteger)arg0 completion:(id)arg1 ;
-(id)initWithRequestedInterfaceOrientationMask:(NSUInteger)arg0 policy:(NSUInteger)arg1 callbackQueue:(id)arg2 completion:(id)arg3 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)settings:(id)arg0 valueDescriptionForFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;


@end


#endif