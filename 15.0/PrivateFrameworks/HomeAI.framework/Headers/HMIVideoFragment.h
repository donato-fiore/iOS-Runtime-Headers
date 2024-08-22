// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOFRAGMENT_H
#define HMIVIDEOFRAGMENT_H

@class HMFObject, NSData, NSString, NSArray;
@protocol HMFLogging, NSSecureCoding;



@interface HMIVideoFragment : HMFObject <HMFLogging, NSSecureCoding>

 {
    BOOL _attributesLoaded;
}


@property (readonly) *opaqueCMFormatDescription audioFormatDescription; // ivar: _audioFormatDescription
@property (readonly) ? audioTrackTimeRange; // ivar: _audioTrackTimeRange
@property (readonly) ? baseDecodeTimeStamp; // ivar: _baseDecodeTimeStamp
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) ? duration;
@property (readonly) _NSRange firstVideoSampleByteRange; // ivar: _firstVideoSampleByteRange
@property (readonly) BOOL frameReorderingRequired; // ivar: _frameReorderingRequired
@property (readonly) NSUInteger hash;
@property (readonly) NSData *initializationSegment; // ivar: _initializationSegment
@property (readonly, copy) NSData *sanitizedData;
@property (readonly, copy) NSData *sanitizedSeperableSegment;
@property (readonly) NSData *separableSegment; // ivar: _separableSegment
@property (readonly) NSUInteger sequenceNumber;
@property (readonly) NSArray *sequenceNumbers; // ivar: _sequenceNumbers
@property (readonly) Class superclass;
@property (readonly) ? timeRange; // ivar: _timeRange
@property (readonly) *opaqueCMFormatDescription videoFormatDescription; // ivar: _videoFormatDescription
@property (readonly) ? videoTrackTimeRange; // ivar: _videoTrackTimeRange


+(BOOL)canFragmentData:(id)arg0 ;
+(BOOL)isInitializationSegment:(id)arg0 combinableWithInitializationSegment:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(void)fragmentData:(id)arg0 handler:(id)arg1 ;
-(BOOL)isCombinableWithFragment:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 timeRange:(struct ? )arg1 ;
-(id)initWithFragments:(id)arg0 ;
-(id)initWithInitializationSegment:(id)arg0 separableSegment:(id)arg1 ;
-(id)initWithInitializationSegment:(id)arg0 separableSegment:(id)arg1 sequenceNumbers:(id)arg2 ;
-(id)initWithInitializationSegment:(id)arg0 separableSegment:(id)arg1 timeRange:(struct ? )arg2 ;
-(id)initWithInitializationSegment:(id)arg0 separableSegment:(id)arg1 timeRange:(struct ? )arg2 firstVideoSampleByteRange:(struct _NSRange )arg3 ;
-(id)initWithInitializationSegment:(id)arg0 separableSegment:(id)arg1 timeRange:(struct ? )arg2 sequenceNumbers:(id)arg3 ;
-(id)initWithInitializationSegment:(id)arg0 separableSegment:(id)arg1 timeRange:(struct ? )arg2 sequenceNumbers:(id)arg3 firstVideoSampleByteRange:(struct _NSRange )arg4 ;
-(id)placeholderCopy;
-(id)redactedCopy;
-(void)_ensureAttributes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif