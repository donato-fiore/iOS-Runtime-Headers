// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTIMELINEENTRY_H
#define PXTIMELINEENTRY_H

@class NSString, NSURL, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXTimelineCrop.h"

@interface PXTimelineEntry : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *assetLocalIdentifier; // ivar: _assetLocalIdentifier
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, nonatomic) NSURL *deeplink; // ivar: _deeplink
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (retain, nonatomic) NSString *proactiveCriterion; // ivar: _proactiveCriterion
@property (nonatomic) NSUInteger rejectReason; // ivar: _rejectReason
@property (readonly, nonatomic) CGFloat relevanceScore; // ivar: _relevanceScore
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) PXTimelineCrop *suggestedCrop; // ivar: _suggestedCrop
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)descriptionForRejectReason:(NSUInteger)arg0 ;
+(id)descriptionForTimelineContentType:(NSUInteger)arg0 ;
+(id)emptyWidgetURL;
+(id)fallbackEntryForSize:(NSUInteger)arg0 ;
+(id)placeholderEntry;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithTimelineEntry:(id)arg0 ;
-(id)_localTimeFormatter;
-(id)_utcTimeFormatter;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithFeaturedPhoto:(id)arg0 andFeaturedPhotoKeyAsset:(id)arg1 ;
-(id)initWithFeaturedPhoto:(id)arg0 andFeaturedPhotoKeyAsset:(id)arg1 suggestedCrop:(id)arg2 ;
-(id)initWithMemory:(id)arg0 andMemoryKeyAsset:(id)arg1 ;


@end


#endif