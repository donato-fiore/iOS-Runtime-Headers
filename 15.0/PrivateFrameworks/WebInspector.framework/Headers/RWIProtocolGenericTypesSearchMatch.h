// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLGENERICTYPESSEARCHMATCH_H
#define RWIPROTOCOLGENERICTYPESSEARCHMATCH_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolGenericTypesSearchMatch : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *lineContent;
@property (nonatomic) CGFloat lineNumber;


-(id)initWithLineNumber:(CGFloat)arg0 lineContent:(id)arg1 ;


@end


#endif