// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCOMPOSITIONTRACKSEGMENT_H
#define AVCOMPOSITIONTRACKSEGMENT_H

@class NSURL;
@protocol NSSecureCoding;


#import "AVAssetTrackSegment.h"
#import "AVCompositionTrackSegmentInternal.h"

@interface AVCompositionTrackSegment : AVAssetTrackSegment <NSSecureCoding>

 {
    AVCompositionTrackSegmentInternal *_priv;
}


@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) int sourceTrackID;
@property (readonly, nonatomic) NSURL *sourceURL;


+(BOOL)supportsSecureCoding;
+(id)compositionTrackSegmentWithTimeRange:(struct ? )arg0 ;
+(id)compositionTrackSegmentWithURL:(id)arg0 trackID:(int)arg1 sourceTimeRange:(struct ? )arg2 targetTimeRange:(struct ? )arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithTimeMapping:(struct ? )arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeRange:(struct ? )arg0 ;
-(id)initWithURL:(id)arg0 trackID:(int)arg1 sourceTimeRange:(struct ? )arg2 targetTimeRange:(struct ? )arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif