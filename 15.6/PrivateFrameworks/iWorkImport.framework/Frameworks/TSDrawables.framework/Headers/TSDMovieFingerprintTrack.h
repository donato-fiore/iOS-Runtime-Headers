// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMOVIEFINGERPRINTTRACK_H
#define TSDMOVIEFINGERPRINTTRACK_H

@class TSKSosBase, NSString, TSPDigest;
@protocol NSCopying;



@interface TSDMovieFingerprintTrack : TSKSosBase <NSCopying>

 {
    NSInteger _totalSampleDataLength;
    NSString *_sampleDataDigestString;
    NSInteger _timeRangeStartValue;
    int _timeRangeStartTimescale;
    BOOL _timeRangeStartIsValid;
    NSInteger _timeRangeDurationValue;
    int _timeRangeDurationTimescale;
    BOOL _timeRangeDurationIsValid;
    CGFloat _preferredTransformA;
    CGFloat _preferredTransformB;
    CGFloat _preferredTransformC;
    CGFloat _preferredTransformD;
    CGFloat _preferredTransformTx;
    CGFloat _preferredTransformTy;
    CGFloat _preferredVolume;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    BOOL _definedLanguageCode;
    BOOL _definedExtendedLanguageTag;
}


@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (readonly, nonatomic) CGSize naturalSize; // ivar: _naturalSize
@property (readonly, nonatomic) CGAffineTransform preferredTransform;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) TSPDigest *sampleDataDigest;
@property (readonly, nonatomic) ? timeRange;
@property (readonly, nonatomic) NSInteger totalSampleDataLength;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithMediaType:(id)arg0 enabled:(BOOL)arg1 totalSampleDataLength:(NSInteger)arg2 sampleDataDigest:(id)arg3 timeRange:(struct ? )arg4 languageCode:(id)arg5 extendedLanguageTag:(id)arg6 naturalSize:(struct CGSize )arg7 preferredTransform:(struct CGAffineTransform )arg8 preferredVolume:(float)arg9 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif