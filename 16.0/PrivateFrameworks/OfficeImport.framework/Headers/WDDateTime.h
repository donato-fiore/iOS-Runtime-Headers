// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDDATETIME_H
#define WDDATETIME_H

@class NSDate;


#import "WDRunWithCharacterProperties.h"

@interface WDDateTime : WDRunWithCharacterProperties {
    NSDate *mDate;
}




-(id)date;
-(id)description;
-(id)initWithParagraph:(id)arg0 date:(id)arg1 ;
-(int)runType;


@end


#endif