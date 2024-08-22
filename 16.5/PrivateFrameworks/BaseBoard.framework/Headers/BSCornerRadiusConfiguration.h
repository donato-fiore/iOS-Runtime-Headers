// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSCORNERRADIUSCONFIGURATION_H
#define BSCORNERRADIUSCONFIGURATION_H

@class NSString;
@protocol BSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding, NSCopying>



@property (readonly, nonatomic) CGFloat bottomLeft; // ivar: _bottomLeft
@property (readonly, nonatomic) CGFloat bottomRight; // ivar: _bottomRight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCongruent;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat topLeft; // ivar: _topLeft
@property (readonly, nonatomic) CGFloat topRight; // ivar: _topRight


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCornerRadius:(CGFloat)arg0 ;
-(id)initWithTopLeft:(CGFloat)arg0 bottomLeft:(CGFloat)arg1 bottomRight:(CGFloat)arg2 topRight:(CGFloat)arg3 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif