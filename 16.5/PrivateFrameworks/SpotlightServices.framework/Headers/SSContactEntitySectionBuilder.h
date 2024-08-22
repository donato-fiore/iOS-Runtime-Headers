// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSCONTACTENTITYSECTIONBUILDER_H
#define SSCONTACTENTITYSECTIONBUILDER_H



#import "SSSectionBuilder.h"
#import "SSContactResultBuilder.h"

@interface SSContactEntitySectionBuilder : SSSectionBuilder

@property (weak, nonatomic) SSContactResultBuilder *contactResultBuilder; // ivar: _contactResultBuilder


-(BOOL)shouldSkipSection;


@end


#endif