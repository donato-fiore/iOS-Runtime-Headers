// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLCSSGROUPING_H
#define RWIPROTOCOLCSSGROUPING_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSGrouping : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger type;


-(id)initWithText:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif