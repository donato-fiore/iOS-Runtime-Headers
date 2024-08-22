// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IFSYMBOLIMAGEDESCRIPTOR_H
#define IFSYMBOLIMAGEDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IFSymbolImageDescriptor : NSObject <NSCopying>



@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) NSUInteger symbolSize; // ivar: _symbolSize
@property (nonatomic) NSInteger symbolWeight; // ivar: _symbolWeight


-(NSUInteger)size;
-(NSUInteger)weight;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)digest;
-(id)init;
-(void)setSize:(NSUInteger)arg0 ;
-(void)setWeight:(NSUInteger)arg0 ;


@end


#endif