// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYTIMEBASEDCHAPTER_H
#define _PXSTORYTIMEBASEDCHAPTER_H

@class NSString, NSDateInterval;
@protocol PXStoryChapter, PXStoryMutableChapter, NSCopying;

#import <Foundation/Foundation.h>


@interface _PXStoryTimeBasedChapter : NSObject <PXStoryChapter, PXStoryMutableChapter, NSCopying>

 {
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
}


@property (retain, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSDateInterval *extendedDateIntervalForComparisonWithAssetDates;
@property (copy, nonatomic) NSString *firstAssetLocalIdentifier; // ivar: _firstAssetLocalIdentifier
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;


-(NSInteger)compareStartDateTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDateInterval:(id)arg0 firstAssetLocalIdentifier:(id)arg1 ;


@end


#endif