// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKENUMERATEDDISPLAYTYPENUMBERFORMATTER_H
#define HKENUMERATEDDISPLAYTYPENUMBERFORMATTER_H

@class NSDictionary, NSString;
@protocol HKNumberFormatter;

#import <Foundation/Foundation.h>


@interface HKEnumeratedDisplayTypeNumberFormatter : NSObject <HKNumberFormatter>

 {
    NSDictionary *_valueLabels;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)returnsUnitWithValueForDisplay;
-(id)initWithDisplayType:(id)arg0 ;
-(id)stringFromNumber:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif