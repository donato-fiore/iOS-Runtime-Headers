// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSNOWPLAYINGSTREAMEVENTMETADATA_H
#define CLSNOWPLAYINGSTREAMEVENTMETADATA_H

@class NSString, NSNumber, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CLSNowPlayingStreamEventMetadata : NSObject <NSCopying>



@property (copy, nonatomic) NSString *album; // ivar: _album
@property (copy, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) NSNumber *durationInSeconds; // ivar: _durationInSeconds
@property (copy, nonatomic) NSSet *genres; // ivar: _genres
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEventMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDuetKnowledgeEvent:(id)arg0 ;


@end


#endif