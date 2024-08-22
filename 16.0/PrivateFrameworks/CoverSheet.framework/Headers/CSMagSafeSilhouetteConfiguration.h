// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSMAGSAFESILHOUETTECONFIGURATION_H
#define CSMAGSAFESILHOUETTECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CSMagSafeSilhouetteConfiguration : NSObject

@property (nonatomic) CGFloat bottomOffset; // ivar: _bottomOffset
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSUInteger roundedCorners; // ivar: _roundedCorners
@property (nonatomic) CGSize size; // ivar: _size


-(NSUInteger)roundedCornersMaskForOrientation:(NSInteger)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 bottomOffset:(CGFloat)arg1 cornerRadius:(CGFloat)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 bottomOffset:(CGFloat)arg1 cornerRadius:(CGFloat)arg2 roundedCorners:(NSUInteger)arg3 ;


@end


#endif