// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGROUPSELECTION_H
#define TSDGROUPSELECTION_H

@class NSSet;


#import "TSDDrawableSelection.h"

@interface TSDGroupSelection : TSDDrawableSelection

@property (readonly, nonatomic) NSSet *containerGroups;
@property (nonatomic) BOOL hasSelectedInfosInNonGroupContainer; // ivar: _hasSelectedInfosInNonGroupContainer
@property (readonly, nonatomic) BOOL isCrossContainerSelection;


+(Class)archivedSelectionClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithContainerGroups:(id)arg0 hasSelectedInfosInNonGroupContainer:(BOOL)arg1 ;
-(id)initWithGroupInfo:(id)arg0 ;
-(id)subclassDescription;


@end


#endif