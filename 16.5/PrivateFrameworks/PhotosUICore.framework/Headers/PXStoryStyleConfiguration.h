// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYSTYLECONFIGURATION_H
#define PXSTORYSTYLECONFIGURATION_H

@class NSString;
@protocol PXStoryStyleDescriptor, PXStoryAutoEditDecisionList, PXStorySongResource;

#import <Foundation/Foundation.h>


@interface PXStoryStyleConfiguration : NSObject <PXStoryStyleDescriptor>



@property (readonly, nonatomic) NSObject<PXStoryAutoEditDecisionList> *autoEditDecisionList; // ivar: _autoEditDecisionList
@property (readonly, nonatomic) NSInteger customColorGradeKind; // ivar: _customColorGradeKind
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCustomized; // ivar: _isCustomized
@property (readonly, nonatomic) NSString *originalColorGradeCategory; // ivar: _originalColorGradeCategory
@property (readonly, nonatomic) NSObject<PXStorySongResource> *songResource; // ivar: _songResource


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithAutoEditDecisionList:(id)arg0 ;
-(id)copyWithCustomizedColorGradeKind:(NSInteger)arg0 ;
-(id)copyWithCustomizedSongResource:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOriginalColorGradeCategory:(id)arg0 customColorGradeKind:(NSInteger)arg1 songResource:(id)arg2 autoEditDecisionList:(id)arg3 isCustomized:(BOOL)arg4 ;


@end


#endif