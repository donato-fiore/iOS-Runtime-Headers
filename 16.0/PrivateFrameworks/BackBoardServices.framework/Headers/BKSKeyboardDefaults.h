// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSKEYBOARDDEFAULTS_H
#define BKSKEYBOARDDEFAULTS_H

@class BSAbstractDefaultDomain, NSDictionary;



@interface BKSKeyboardDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSDictionary *modifierKeyRemapping;
@property (retain, nonatomic) NSDictionary *oldModifierKeyRemapping;


-(id)init;
-(void)_bindAndRegisterDefaults;
-(void)migrateIfNeeded;


@end


#endif