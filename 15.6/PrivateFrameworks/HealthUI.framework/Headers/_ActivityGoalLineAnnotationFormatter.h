// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ACTIVITYGOALLINEANNOTATIONFORMATTER_H
#define _ACTIVITYGOALLINEANNOTATIONFORMATTER_H

@class NSString;
@protocol HKNumberFormatter;

#import <Foundation/Foundation.h>


@interface _ActivityGoalLineAnnotationFormatter : NSObject <HKNumberFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)returnsUnitWithValueForDisplay;
-(id)stringFromNumber:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif