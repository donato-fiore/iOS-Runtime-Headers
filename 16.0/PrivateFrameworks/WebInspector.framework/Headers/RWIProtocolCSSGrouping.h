// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLCSSGROUPING_H
#define RWIPROTOCOLCSSGROUPING_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSGrouping : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger type;


-(id)initWithType:(NSInteger)arg0 ;


@end


#endif