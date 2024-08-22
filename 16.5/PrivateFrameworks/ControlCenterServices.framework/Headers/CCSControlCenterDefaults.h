// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCSCONTROLCENTERDEFAULTS_H
#define CCSCONTROLCENTERDEFAULTS_H

@class BSAbstractDefaultDomain;



@interface CCSControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic) NSUInteger presentationGesture;
@property (nonatomic) BOOL shouldEnableInternalModules;
@property (nonatomic) BOOL shouldEnablePrototypeFeatures;
@property (nonatomic) NSUInteger userInvocationCount;


+(id)standardDefaults;
-(NSUInteger)_defaultPresentationGesture;
-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif