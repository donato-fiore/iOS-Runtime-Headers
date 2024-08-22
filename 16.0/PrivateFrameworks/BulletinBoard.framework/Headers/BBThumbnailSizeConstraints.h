// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBTHUMBNAILSIZECONSTRAINTS_H
#define BBTHUMBNAILSIZECONSTRAINTS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBThumbnailSizeConstraints : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger constraintType; // ivar: _constraintType
@property (nonatomic) float fixedDimension; // ivar: _fixedDimension
@property (nonatomic) float fixedHeight; // ivar: _fixedHeight
@property (nonatomic) float fixedWidth; // ivar: _fixedWidth
@property (nonatomic) float maxAspectRatio; // ivar: _maxAspectRatio
@property (nonatomic) float minAspectRatio; // ivar: _minAspectRatio
@property (nonatomic) float thumbnailScale; // ivar: _thumbnailScale


+(BOOL)supportsSecureCoding;
-(BOOL)areReasonable;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct CGSize )sizeFromAspectRatio:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif