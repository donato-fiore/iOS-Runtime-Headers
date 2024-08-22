// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLCSSSELECTORLIST_H
#define RWIPROTOCOLCSSSELECTORLIST_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolCSSSourceRange.h"

@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolCSSSourceRange *range;
@property (copy, nonatomic) NSArray *selectors;
@property (copy, nonatomic) NSString *text;


-(id)initWithSelectors:(id)arg0 text:(id)arg1 ;


@end


#endif