// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REROUTINEDATA_H
#define _REROUTINEDATA_H

@class NSArray;
@protocol REAutomaticExportedInterface;

#import <Foundation/Foundation.h>


@interface _RERoutineData : NSObject <REAutomaticExportedInterface>



@property (retain, nonatomic) NSArray *locationsOfInterest; // ivar: _locationsOfInterest
@property (nonatomic) NSInteger mode; // ivar: _mode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRoutineData:(id)arg0 ;
-(id)description;


@end


#endif