// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKEVENTMO_H
#define _DKEVENTMO_H

@class DKObjectMO, NSSet, NSString;


#import "_DKStructuredMetadataMO.h"
#import "_DKObjectMO.h"

@interface _DKEventMO : DKObjectMO

@property (nonatomic) NSInteger compatibilityVersion;
@property (nonatomic) CGFloat confidence;
@property (retain, nonatomic) NSSet *customMetadata;
@property (nonatomic) CGFloat endDate;
@property (nonatomic) short endDayOfWeek;
@property (nonatomic) int endSecondOfDay;
@property (nonatomic) BOOL hasCustomMetadata;
@property (nonatomic) BOOL hasStructuredMetadata;
@property (nonatomic) NSInteger secondsFromGMT;
@property (nonatomic) BOOL shouldSync;
@property (nonatomic) CGFloat startDate;
@property (nonatomic) short startDayOfWeek;
@property (nonatomic) int startSecondOfDay;
@property (retain, nonatomic) NSString *streamName;
@property (retain, nonatomic) _DKStructuredMetadataMO *structuredMetadata;
@property (retain, nonatomic) _DKObjectMO *value;
@property (nonatomic) short valueClass;
@property (nonatomic) CGFloat valueDouble;
@property (nonatomic) NSInteger valueInteger;
@property (retain, nonatomic) NSString *valueString;
@property (nonatomic) NSInteger valueTypeCode;




@end


#endif