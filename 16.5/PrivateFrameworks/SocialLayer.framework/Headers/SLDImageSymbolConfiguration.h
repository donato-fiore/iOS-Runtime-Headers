// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDIMAGESYMBOLCONFIGURATION_H
#define SLDIMAGESYMBOLCONFIGURATION_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLDImageSymbolConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (retain, nonatomic) NSNumber *pointSizeNumber; // ivar: _pointSizeNumber
@property (nonatomic) NSInteger size; // ivar: _size
@property (nonatomic) NSInteger weight; // ivar: _weight


+(BOOL)supportsSecureCoding;
+(id)configurationWithSize:(NSInteger)arg0 weight:(NSInteger)arg1 pointSize:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(NSInteger)arg0 weight:(NSInteger)arg1 pointSize:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif