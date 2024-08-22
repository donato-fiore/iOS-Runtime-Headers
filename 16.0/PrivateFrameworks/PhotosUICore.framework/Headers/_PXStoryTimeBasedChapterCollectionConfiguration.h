// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYTIMEBASEDCHAPTERCOLLECTIONCONFIGURATION_H
#define _PXSTORYTIMEBASEDCHAPTERCOLLECTIONCONFIGURATION_H

@class NSMutableArray;
@protocol PXStoryConfigurableTimeBasedChapterCollection;

#import <Foundation/Foundation.h>


@interface _PXStoryTimeBasedChapterCollectionConfiguration : NSObject <PXStoryConfigurableTimeBasedChapterCollection>



@property (readonly, nonatomic) NSMutableArray *chapters; // ivar: _chapters
@property (nonatomic) BOOL usesAssetLocalCreationDates; // ivar: _usesAssetLocalCreationDates


-(id)init;
-(void)addChapterWithDateInterval:(id)arg0 configuration:(id)arg1 ;


@end


#endif