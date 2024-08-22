// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTCINEMATICTRACK_H
#define FTCINEMATICTRACK_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FTCinematicTrack : NSObject <NSSecureCoding>



@property (nonatomic) CGRect box; // ivar: _box
@property (nonatomic) float boxConfidence; // ivar: _boxConfidence
@property (nonatomic) float detectionConfidence; // ivar: _detectionConfidence
@property (nonatomic) NSInteger identifier; // ivar: _identifier
@property (nonatomic) BOOL isHighPriority; // ivar: _isHighPriority
@property (nonatomic) BOOL isTapSpawned; // ivar: _isTapSpawned
@property (nonatomic) ? lastDetectionTime; // ivar: _lastDetectionTime
@property (nonatomic) ? lastTappedTime; // ivar: _lastTappedTime
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) NSUInteger objectKind; // ivar: _objectKind
@property NSUInteger sourceObservationId; // ivar: _sourceObservationId


+(BOOL)supportsSecureCoding;
+(id)fromTrack:(struct shared_ptr<ft::Track> )arg0 isHighPriority:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif