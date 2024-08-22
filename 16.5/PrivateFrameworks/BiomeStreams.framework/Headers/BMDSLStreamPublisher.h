// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDSLSTREAMPUBLISHER_H
#define BMDSLSTREAMPUBLISHER_H

@class BMDSL, NSArray, NSString, NSNumber;
@protocol BMDSLIdentifiable, BMBookmark;



@interface BMDSLStreamPublisher : BMDSL <BMDSLIdentifiable>



@property (retain, nonatomic) NSArray *backingEvents; // ivar: _backingEvents
@property (readonly, nonatomic) NSString *basePath; // ivar: _basePath
@property (readonly, nonatomic) NSObject<BMBookmark> *bookmark; // ivar: _bookmark
@property (retain, nonatomic) NSNumber *endTime; // ivar: _endTime
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) NSUInteger streamType; // ivar: _streamType


+(BOOL)isStreamIdentifierValid:(id)arg0 ;
+(BOOL)isStreamInfoValidForIdentifier:(id)arg0 basePath:(id)arg1 streamType:(NSUInteger)arg2 ;
+(BOOL)isStreamTypeInValidRange:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)streamTypeForDSLType:(NSUInteger)arg0 ;
+(id)name;
-(id)bpsPublisher;
-(id)initRestrictedStreamWithBookmark:(id)arg0 identifier:(id)arg1 ;
-(id)initRestrictedStreamWithPublisher:(id)arg0 identifier:(id)arg1 ;
-(id)initWithBookmark:(id)arg0 identifier:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 streamType:(NSUInteger)arg4 basePath:(id)arg5 ;
-(id)initWithBookmark:(id)arg0 identifier:(id)arg1 privateStreamBasePath:(id)arg2 ;
-(id)initWithBookmark:(id)arg0 identifier:(id)arg1 startTime:(CGFloat)arg2 privateStreamBasePath:(id)arg3 ;
-(id)initWithBookmark:(id)arg0 identifier:(id)arg1 streamType:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithIdentifier:(id)arg0 streamType:(NSUInteger)arg1 ;
-(id)initWithPublisher:(id)arg0 identifier:(id)arg1 streamType:(NSUInteger)arg2 ;
-(id)initWithStartTime:(CGFloat)arg0 identifier:(id)arg1 streamType:(NSUInteger)arg2 ;
-(id)storeStream;
-(id)upstreams;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif