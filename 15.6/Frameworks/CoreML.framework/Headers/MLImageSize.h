// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLIMAGESIZE_H
#define MLIMAGESIZE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLImageSize : NSObject <NSSecureCoding>



@property (readonly) NSInteger pixelsHigh; // ivar: _pixelsHigh
@property (readonly) NSInteger pixelsWide; // ivar: _pixelsWide


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToImageSize:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPixelsWide:(NSInteger)arg0 pixelsHigh:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif