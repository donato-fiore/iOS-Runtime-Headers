// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHUSERFEEDBACK_H
#define PHUSERFEEDBACK_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHUserFeedback : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *context; // ivar: _context
@property (readonly) NSUInteger feature; // ivar: _feature
@property (readonly, copy) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSUInteger)_feedbackFeatureForMemoryFeature:(id)arg0 ;
+(NSUInteger)mergeFeedbackType:(NSUInteger)arg0 withOtherFeedbackType:(NSUInteger)arg1 ;
+(NSUInteger)sumFeedbackType:(NSUInteger)arg0 withOtherFeedbackType:(NSUInteger)arg1 ;
+(id)_contextForMemoryFeature:(id)arg0 ;
+(id)_contextForSongIdentifiers:(id)arg0 ;
+(id)negativeUserFeedbackForMemoryFeature:(id)arg0 existingFeedback:(id)arg1 ;
+(id)negativeUserFeedbackForMemoryMusicWithSongIdentifier:(id)arg0 existingFeedback:(id)arg1 ;
+(id)negativeUserFeedbackForPerson:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)contextAsDateIntervalWithError:(*id)arg0 ;
-(id)contextAsDateWithError:(*id)arg0 ;
-(id)contextAsListOfSongIdentifiersWithError:(*id)arg0 ;
-(id)contextAsLocationWithError:(*id)arg0 ;
-(id)contextAsStringWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 feature:(NSUInteger)arg1 context:(id)arg2 ;
-(id)initWithType:(NSUInteger)arg0 feature:(NSUInteger)arg1 context:(id)arg2 lastModifiedDate:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif