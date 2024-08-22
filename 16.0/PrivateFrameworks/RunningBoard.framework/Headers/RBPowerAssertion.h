// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPOWERASSERTION_H
#define RBPOWERASSERTION_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface RBPowerAssertion : NSObject {
    unsigned int _identifier;
    NSDate *_acquisitionDate;
    NSString *_name;
    NSString *_baseName;
    BOOL _invalidated;
    os_unfair_lock_s _lock;
}




-(id)_preventIdleSleepIdentifiers;
-(id)description;
-(id)init;
-(int)_targetPid;
-(void)dealloc;


@end


#endif