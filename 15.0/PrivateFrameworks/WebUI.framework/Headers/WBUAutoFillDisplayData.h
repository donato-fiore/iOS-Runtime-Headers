// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBUAUTOFILLDISPLAYDATA_H
#define WBUAUTOFILLDISPLAYDATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WBUAutoFillDisplayData : NSObject

@property (readonly, copy, nonatomic) NSArray *fillMatches; // ivar: _fillMatches
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) NSString *valueString;


-(id)addressStringForLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 fillMatches:(id)arg1 ;


@end


#endif