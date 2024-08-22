// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORMODELDIFF_H
#define AVTAVATARATTRIBUTEEDITORMODELDIFF_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorModelDiff : NSObject

@property (readonly, nonatomic) NSArray *sectionDiffs; // ivar: _sectionDiffs
@property (readonly, nonatomic) NSDictionary *sectionItemDiffs; // ivar: _sectionItemDiffs


-(id)initWithSectionDiffs:(id)arg0 sectionItemDiffs:(id)arg1 ;


@end


#endif