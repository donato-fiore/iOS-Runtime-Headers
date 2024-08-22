// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHADJUSTMENTDATA_H
#define PHADJUSTMENTDATA_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHAdjustmentData : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger baseVersion; // ivar: _baseVersion
@property (readonly) NSData *data; // ivar: _data
@property (copy, nonatomic) NSString *formatIdentifier; // ivar: _formatIdentifier
@property (copy, nonatomic) NSString *formatVersion; // ivar: _formatVersion
@property (readonly, getter=isOpaque) BOOL opaque;


+(BOOL)supportsSecureCoding;
+(NSInteger)adjustmentBaseVersionFromImageRequestVersion:(NSInteger)arg0 ;
+(NSInteger)adjustmentBaseVersionFromVideoRequestVersion:(NSInteger)arg0 ;
+(NSInteger)imageRequestVersionFromAdjustmentBaseVersion:(NSInteger)arg0 ;
+(NSInteger)videoRequestVersionFromAdjustmentBaseVersion:(NSInteger)arg0 ;
+(id)opaqueAdjustmentData;
-(BOOL)_contentEditing_containsValidAdjustment;
-(BOOL)_contentEditing_readableByClientWithVerificationBlock:(id)arg0 ;
-(BOOL)_hasAdjustments;
-(NSInteger)_contentEditing_requiredBaseVersionReadableByClient:(*BOOL)arg0 verificationBlock:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormatIdentifier:(id)arg0 formatVersion:(id)arg1 data:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif