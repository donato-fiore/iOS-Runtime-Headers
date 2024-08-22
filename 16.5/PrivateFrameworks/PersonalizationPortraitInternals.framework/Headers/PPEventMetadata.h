// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPEVENTMETADATA_H
#define PPEVENTMETADATA_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PPEventMetadata : NSObject <NSCopying>

 {
    NSUInteger _ocnt_precomputedHash;
}


@property (readonly, nonatomic) CGFloat earliestStartTime; // ivar: _earliestStartTime
@property (readonly, nonatomic) BOOL shouldConsiderAlarms; // ivar: _shouldConsiderAlarms
@property (readonly, nonatomic) NSDictionary *titlesAndParticipants; // ivar: _titlesAndParticipants


+(id)eventMetadataWithTitlesAndParticipants:(id)arg0 earliestStartTime:(CGFloat)arg1 shouldConsiderAlarms:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEventMetadata:(id)arg0 ;
-(NSUInteger)_hash;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTitlesAndParticipants:(id)arg0 earliestStartTime:(CGFloat)arg1 shouldConsiderAlarms:(BOOL)arg2 ;


@end


#endif