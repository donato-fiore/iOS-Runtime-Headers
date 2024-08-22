// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSEXTERNALDEFAULTS_H
#define BKSEXTERNALDEFAULTS_H



#import "BKSAbstractDefaults.h"
#import "BKSLockdownDefaults.h"
#import "BKSIAPDefaults.h"
#import "BKSPersistentConnectionDefaults.h"
#import "BKSSpringBoardDefaults.h"
#import "BKSKeyboardDefaults.h"

@interface BKSExternalDefaults : BKSAbstractDefaults {
    BKSLockdownDefaults *_lazy_lockdownDefaults;
    BKSIAPDefaults *_lazy_iapDefaults;
    BKSPersistentConnectionDefaults *_lazy_persistentConnectionDefaults;
    BKSSpringBoardDefaults *_lazy_springBoardDefaults;
    BKSKeyboardDefaults *_lazy_keyboardDefaults;
}


@property (readonly, retain, nonatomic) BKSIAPDefaults *iapDefaults;
@property (readonly, retain, nonatomic) BKSKeyboardDefaults *keyboardDefaults;
@property (readonly, retain, nonatomic) BKSLockdownDefaults *lockdownDefaults;
@property (readonly, retain, nonatomic) BKSPersistentConnectionDefaults *persistentConnectionDefaults;
@property (readonly, retain, nonatomic) BKSSpringBoardDefaults *springBoardDefaults;




@end


#endif