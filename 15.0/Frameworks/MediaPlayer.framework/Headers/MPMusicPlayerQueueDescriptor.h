// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMUSICPLAYERQUEUEDESCRIPTOR_H
#define MPMUSICPLAYERQUEUEDESCRIPTOR_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSDictionary *endTimes; // ivar: _endTimes
@property (copy, nonatomic) NSString *playActivityFeatureName; // ivar: _playActivityFeatureName
@property (copy, nonatomic) NSString *playActivityQueueGroupingID; // ivar: _playActivityQueueGroupingID
@property (nonatomic, getter=isPrivate) BOOL private; // ivar: _private
@property (nonatomic) NSInteger repeatType; // ivar: _repeatType
@property (readonly, nonatomic) NSString *requestingBundleIdentifier; // ivar: _requestingBundleIdentifier
@property (readonly, nonatomic) NSString *requestingBundleVersion; // ivar: _requestingBundleVersion
@property (nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (readonly, nonatomic) NSDictionary *startTimes; // ivar: _startTimes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_setEndTime:(CGFloat)arg0 forIdentifiers:(id)arg1 ;
-(void)_setStartTime:(CGFloat)arg0 forIdentifiers:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif