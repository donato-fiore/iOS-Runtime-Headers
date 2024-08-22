// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELCOMPOSER_H
#define MPMODELCOMPOSER_H

@class NSDate;


#import "MPModelPerson.h"

@interface MPModelComposer : MPModelPerson

@property (copy, nonatomic) NSDate *libraryAddedDate;


+(NSInteger)genericObjectType;
+(id)kindWithAlbumKind:(id)arg0 ;


@end


#endif