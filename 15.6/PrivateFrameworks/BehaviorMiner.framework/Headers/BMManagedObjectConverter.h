// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMMANAGEDOBJECTCONVERTER_H
#define BMMANAGEDOBJECTCONVERTER_H


#import <Foundation/Foundation.h>


@interface BMManagedObjectConverter : NSObject



-(id)convertItemMOs:(id)arg0 error:(*id)arg1 ;
-(id)convertRuleMOs:(id)arg0 basketCount:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)insertItems:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)insertRules:(id)arg0 inManagedObjectContext:(id)arg1 ;


@end


#endif