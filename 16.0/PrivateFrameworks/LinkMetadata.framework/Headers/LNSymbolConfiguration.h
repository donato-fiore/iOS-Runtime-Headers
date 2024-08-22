// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNSYMBOLCONFIGURATION_H
#define LNSYMBOLCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNSymbolConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (readonly, nonatomic) NSInteger scale; // ivar: _scale
@property (readonly, nonatomic) NSInteger weight; // ivar: _weight


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPointSize:(CGFloat)arg0 scale:(NSInteger)arg1 weight:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif