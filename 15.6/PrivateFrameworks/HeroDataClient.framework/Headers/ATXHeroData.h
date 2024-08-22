// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHERODATA_H
#define ATXHERODATA_H

@class NSString, CPSClipMetadata;
@protocol ATXProtoBufWrapper, ATXSuggestionExecutableProtocol, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXHeroData : NSObject <ATXProtoBufWrapper, ATXSuggestionExecutableProtocol, NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger adamId; // ivar: _adamId
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) CPSClipMetadata *clipMetadata; // ivar: _clipMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTouristApp; // ivar: _isTouristApp
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat latitudeAtPredictionTime; // ivar: _latitudeAtPredictionTime
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat longitudeAtPredictionTime; // ivar: _longitudeAtPredictionTime
@property (retain, nonatomic) NSString *poiCategory; // ivar: _poiCategory
@property (nonatomic) NSUInteger radiusInMeters; // ivar: _radiusInMeters
@property (nonatomic) NSUInteger rank; // ivar: _rank
@property (nonatomic) CGFloat score; // ivar: _score
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *urlHash; // ivar: _urlHash


+(BOOL)isClipMetadataEqual:(id)arg0 other:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)copyClipMetadata:(id)arg0 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredictedAdamId:(NSUInteger)arg0 bundleId:(id)arg1 latitude:(CGFloat)arg2 longitude:(CGFloat)arg3 radiusInMeters:(NSUInteger)arg4 rank:(NSUInteger)arg5 isTouristApp:(BOOL)arg6 score:(CGFloat)arg7 urlHash:(id)arg8 clipMetadata:(id)arg9 ;
-(id)initWithPredictedAdamId:(NSUInteger)arg0 bundleId:(id)arg1 latitude:(CGFloat)arg2 longitude:(CGFloat)arg3 radiusInMeters:(NSUInteger)arg4 rank:(NSUInteger)arg5 isTouristApp:(BOOL)arg6 score:(CGFloat)arg7 urlHash:(id)arg8 clipMetadata:(id)arg9 poiCategory:(id)arg10 ;
-(id)initWithPredictedAdamId:(NSUInteger)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 radiusInMeters:(NSUInteger)arg3 rank:(NSUInteger)arg4 isTouristApp:(BOOL)arg5 ;
-(id)initWithPredictedBundleId:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 radiusInMeters:(NSUInteger)arg3 rank:(NSUInteger)arg4 isTouristApp:(BOOL)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif