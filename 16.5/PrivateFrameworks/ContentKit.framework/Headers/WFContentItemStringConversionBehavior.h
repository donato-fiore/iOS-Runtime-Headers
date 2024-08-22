// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTENTITEMSTRINGCONVERSIONBEHAVIOR_H
#define WFCONTENTITEMSTRINGCONVERSIONBEHAVIOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WFContentProperty.h"

@interface WFContentItemStringConversionBehavior : NSObject

@property (readonly, nonatomic) NSString *behaviorDescription; // ivar: _behaviorDescription
@property (readonly, nonatomic) WFContentProperty *property; // ivar: _property


+(id)accessingProperty:(id)arg0 ;
+(id)coercingToStringWithDescription:(id)arg0 ;
-(id)initWithProperty:(id)arg0 description:(id)arg1 ;


@end


#endif