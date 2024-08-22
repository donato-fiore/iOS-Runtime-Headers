// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSTRINGPROPERTY_H
#define CMSTRINGPROPERTY_H

@class NSString;


#import "CMProperty.h"

@interface CMStringProperty : CMProperty {
    NSString *wdValue;
}




-(id)cssStringForName:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)value;


@end


#endif