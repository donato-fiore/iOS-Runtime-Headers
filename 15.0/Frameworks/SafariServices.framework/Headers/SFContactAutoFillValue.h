// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCONTACTAUTOFILLVALUE_H
#define SFCONTACTAUTOFILLVALUE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SFContactAutoFillValue : NSObject

@property (readonly, copy, nonatomic) NSString *displayValue; // ivar: _displayValue
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSArray *matches; // ivar: _matches
@property (nonatomic) BOOL selected; // ivar: _selected


-(id)initWithMatches:(id)arg0 displayValue:(id)arg1 label:(id)arg2 ;


@end


#endif