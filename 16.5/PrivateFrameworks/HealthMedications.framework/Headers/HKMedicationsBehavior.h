// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSBEHAVIOR_H
#define HKMEDICATIONSBEHAVIOR_H


#import <Foundation/Foundation.h>


@interface HKMedicationsBehavior : NSObject

@property (nonatomic) BOOL medicationsFutureMigrationsEnabled; // ivar: _medicationsFutureMigrationsEnabled


+(BOOL)_medicationFutureMigrationsEnabled;
+(id)sharedBehavior;
+(void)resetSharedBehavior;
+(void)setSharedBehavior:(id)arg0 ;
-(id)init;


@end


#endif