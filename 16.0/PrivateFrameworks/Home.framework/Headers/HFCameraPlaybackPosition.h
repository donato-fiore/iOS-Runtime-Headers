// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERAPLAYBACKPOSITION_H
#define HFCAMERAPLAYBACKPOSITION_H

@class HMCameraClip, NSDate, NSString;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFCameraPlaybackPosition : NSObject <NAIdentifiable>



@property (retain, nonatomic) HMCameraClip *clip; // ivar: _clip
@property (readonly, copy, nonatomic) NSDate *clipPlaybackDate; // ivar: _clipPlaybackDate
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clipPositionWithDate:(id)arg0 ;
+(id)clipPositionWithDate:(id)arg0 inClip:(id)arg1 ;
+(id)livePosition;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithClipPlaybackDate:(id)arg0 inClip:(id)arg1 ;
-(id)initWithContentType:(NSUInteger)arg0 clipPlaybackDate:(id)arg1 ;


@end


#endif