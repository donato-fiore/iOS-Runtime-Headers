// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUPRIORITY_H
#define NUPRIORITY_H


#import <Foundation/Foundation.h>


@interface NUPriority : NSObject

@property (readonly, nonatomic) BOOL isHigh;
@property (readonly, nonatomic) BOOL isLow;
@property (readonly, nonatomic) NSInteger level; // ivar: _level
@property (readonly, nonatomic) CGFloat order; // ivar: _order


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPriority:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithLevel:(NSInteger)arg0 ;
-(id)initWithLevel:(NSInteger)arg0 order:(CGFloat)arg1 ;


@end


#endif