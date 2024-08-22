// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTBEHAVIOR_H
#define SXCOMPONENTBEHAVIOR_H

@class NSString;


#import "SXJSONObject.h"

@interface SXComponentBehavior : SXJSONObject

@property (readonly, nonatomic) NSString *type;


-(Class)handlerClassForComponent:(id)arg0 ;


@end


#endif