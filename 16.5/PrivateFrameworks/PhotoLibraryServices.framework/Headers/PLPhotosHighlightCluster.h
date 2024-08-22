// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOSHIGHLIGHTCLUSTER_H
#define PLPHOTOSHIGHLIGHTCLUSTER_H

@class NSSet, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLPhotosHighlightCluster : NSObject

@property (retain, nonatomic) NSSet *assets; // ivar: _assets
@property (nonatomic) unsigned short category; // ivar: _category
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) int endTimeZoneOffset; // ivar: _endTimeZoneOffset
@property (nonatomic) unsigned short kind; // ivar: _kind
@property (readonly, nonatomic) NSSet *moments; // ivar: _moments
@property (readonly, nonatomic) NSObject<NSCopying> *objectID; // ivar: _objectID
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) int startTimeZoneOffset; // ivar: _startTimeZoneOffset
@property (nonatomic) unsigned short type; // ivar: _type


-(id)initWithMoments:(id)arg0 ;
-(void)_calculatePropertyValues;


@end


#endif