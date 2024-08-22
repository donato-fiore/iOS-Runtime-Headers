// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORETHEMECONSTANTMIGRATIONPOLICY_H
#define CORETHEMECONSTANTMIGRATIONPOLICY_H

@class NSEntityMigrationPolicy;



@interface CoreThemeConstantMigrationPolicy : NSEntityMigrationPolicy



-(BOOL)beginEntityMapping:(id)arg0 manager:(id)arg1 error:(*id)arg2 ;
-(BOOL)createDestinationInstancesForSourceInstance:(id)arg0 entityMapping:(id)arg1 manager:(id)arg2 error:(*id)arg3 ;


@end


#endif