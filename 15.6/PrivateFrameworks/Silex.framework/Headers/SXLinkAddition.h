// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXLINKADDITION_H
#define SXLINKADDITION_H

@class NSURL;


#import "SXAddition.h"
#import "SXJSONDictionary.h"

@interface SXLinkAddition : SXAddition

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) SXJSONDictionary *analytics;


-(id)action;


@end


#endif