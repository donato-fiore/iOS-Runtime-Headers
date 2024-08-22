// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKSIMPLEPROGRESSPROVIDER_H
#define CLKSIMPLEPROGRESSPROVIDER_H



#import "CLKProgressProvider.h"

@interface CLKSimpleProgressProvider : CLKProgressProvider

@property (nonatomic) CGFloat progress; // ivar: _progress


+(BOOL)supportsSecureCoding;
+(id)simpleProgressProviderWithProgress:(CGFloat)arg0 ;
-(BOOL)_needsUpdates;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_progressFractionForNow:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_validate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif