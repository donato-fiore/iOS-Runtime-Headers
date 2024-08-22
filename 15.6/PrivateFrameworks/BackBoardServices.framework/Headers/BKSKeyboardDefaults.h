// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSKEYBOARDDEFAULTS_H
#define BKSKEYBOARDDEFAULTS_H

@class BSAbstractDefaultDomain, NSDictionary;



@interface BKSKeyboardDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) NSDictionary *modifierKeyRemapping;


-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif