// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTTEMPLATECONTENTRATING_H
#define SASTTEMPLATECONTENTRATING_H

@class NSString;


#import "SASTTemplateRating.h"

@interface SASTTemplateContentRating : SASTTemplateRating

@property (copy, nonatomic) NSString *system;
@property (copy, nonatomic) NSString *value;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif