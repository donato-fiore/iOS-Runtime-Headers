// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXEMBEDCOMPONENT_H
#define SXEMBEDCOMPONENT_H

@class NSString;


#import "SXComponent.h"

@interface SXEmbedComponent : SXComponent

@property (readonly, nonatomic) NSString *embedType;
@property (readonly, nonatomic) NSString *resourceIdentifier;


-(NSUInteger)traits;


@end


#endif