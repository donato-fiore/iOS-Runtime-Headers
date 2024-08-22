// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDVIDEORESOLUTION_H
#define HMDVIDEORESOLUTION_H

@class HAPNumberParser, NSNumber;
@protocol NSSecureCoding, NSCopying;



@interface HMDVideoResolution : HAPNumberParser <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSNumber *imageHeight; // ivar: _imageHeight
@property (readonly, copy, nonatomic) NSNumber *imageWidth; // ivar: _imageWidth
@property (readonly, nonatomic) NSUInteger resolutionType; // ivar: _resolutionType


+(BOOL)supportsSecureCoding;
+(id)arrayWithResolutions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResolution:(NSUInteger)arg0 ;
-(id)initWithTLVData:(id)arg0 ;
-(void)_extractWidthAndHeight;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif