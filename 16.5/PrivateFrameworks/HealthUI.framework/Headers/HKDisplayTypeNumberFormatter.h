// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDISPLAYTYPENUMBERFORMATTER_H
#define HKDISPLAYTYPENUMBERFORMATTER_H

@class NSString;
@protocol HKNumberFormatter;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"
#import "HKUnitPreferenceController.h"
#import "HKDisplayTypeValueFormatter.h"

@interface HKDisplayTypeNumberFormatter : NSObject <HKNumberFormatter>

 {
    HKDisplayType *_displayType;
    HKUnitPreferenceController *_unitController;
    HKDisplayTypeValueFormatter *_valueFormatter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)returnsUnitWithValueForDisplay;
-(id)initWithDisplayType:(id)arg0 unitController:(id)arg1 ;
-(id)stringFromNumber:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif