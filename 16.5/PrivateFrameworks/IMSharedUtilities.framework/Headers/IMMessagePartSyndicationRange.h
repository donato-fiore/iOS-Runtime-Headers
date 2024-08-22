// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMESSAGEPARTSYNDICATIONRANGE_H
#define IMMESSAGEPARTSYNDICATIONRANGE_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IMMessagePartSyndicationAssetDescriptor.h"

@interface IMMessagePartSyndicationRange : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) IMMessagePartSyndicationAssetDescriptor *assetDescriptor; // ivar: _assetDescriptor
@property (readonly, nonatomic) _NSRange messagePartRange; // ivar: _messagePartRange
@property (readonly, nonatomic) NSString *serializedString; // ivar: _serializedString
@property (readonly, nonatomic) NSUInteger serializedVersion; // ivar: _serializedVersion
@property (readonly, nonatomic) NSDate *syndicationStartDate; // ivar: _syndicationStartDate
@property (nonatomic) NSInteger syndicationStatus; // ivar: _syndicationStatus
@property (readonly, nonatomic) NSInteger syndicationType; // ivar: _syndicationType


+(BOOL)supportsSecureCoding;
+(NSUInteger)serializationVersion;
+(id)_stringFromSyndicationStatus:(NSInteger)arg0 ;
+(id)_stringFromSyndicationType:(NSInteger)arg0 ;
+(id)deserializeSyndicationRangeFromString:(id)arg0 ;
+(id)findChangesFromRangeArray:(id)arg0 comparedToRangeArray:(id)arg1 ;
+(id)maxStartDateForRanges:(id)arg0 ;
+(id)messagePartSyndicationRangeForRange:(struct _NSRange )arg0 inRangesArray:(id)arg1 ;
+(id)messageRangeFromTokens_v1:(id)arg0 ;
+(id)messageRangeFromTokens_v3:(id)arg0 ;
+(id)minStartDateForRanges:(id)arg0 ;
+(id)rangesFromSerializedString:(id)arg0 ;
+(id)removeAssetInfoForAsset:(NSInteger)arg0 range:(id)arg1 ;
+(id)replaceAssetInfoWith:(id)arg0 asset:(NSInteger)arg1 range:(id)arg2 ;
+(id)serializedStringFromArray:(id)arg0 ;
+(id)syndicationRangeForAssetDescriptor:(id)arg0 range:(id)arg1 ;
+(id)unarchiveClasses;
+(id)updateAssetInfoWith:(id)arg0 asset:(NSInteger)arg1 range:(id)arg2 ;
+(id)updateMessagesRanges:(id)arg0 withMessagePartSyndicationRanges:(id)arg1 didUpdate:(*BOOL)arg2 ;
+(void)setSerializationVersion:(NSUInteger)arg0 ;
-(BOOL)_canBeReplacedByRange:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSyndicationAction:(id)arg0 ;
-(id)initWithSyndicationType:(NSInteger)arg0 messagePartRange:(struct _NSRange )arg1 syndicationStartDate:(id)arg2 ;
-(id)initWithSyndicationType:(NSInteger)arg0 messagePartRange:(struct _NSRange )arg1 syndicationStartDate:(id)arg2 syndicationStatus:(NSInteger)arg3 assetDescriptor:(id)arg4 ;
-(id)syndicationForPartIndex:(NSUInteger)arg0 asset:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif