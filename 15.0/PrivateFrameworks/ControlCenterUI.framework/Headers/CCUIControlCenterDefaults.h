// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUICONTROLCENTERDEFAULTS_H
#define CCUICONTROLCENTERDEFAULTS_H

@class BSAbstractDefaultDomain;



@interface CCUIControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL hasForceTouchedToExpandModule;
@property (nonatomic) BOOL hasLongPressedToExpandModule;
@property (readonly, nonatomic) BOOL shouldAlwaysBeEnabled;
@property (readonly, nonatomic) BOOL shouldExcludeControlCenterFromStatusBarOverrides;


+(id)standardDefaults;
-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif