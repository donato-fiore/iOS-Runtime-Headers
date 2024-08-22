// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLCSSFONT_H
#define RWIPROTOCOLCSSFONT_H

@class NSString, NSArray;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSFont : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *variationAxes;


-(id)initWithDisplayName:(id)arg0 variationAxes:(id)arg1 ;


@end


#endif