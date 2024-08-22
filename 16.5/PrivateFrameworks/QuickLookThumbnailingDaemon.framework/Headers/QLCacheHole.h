// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLCACHEHOLE_H
#define QLCACHEHOLE_H


#import <Foundation/Foundation.h>


@interface QLCacheHole : NSObject

@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger location; // ivar: _location


+(id)holeWithLocation:(NSUInteger)arg0 length:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithLocation:(NSUInteger)arg0 length:(NSUInteger)arg1 ;
-(struct _NSRange )range;
-(void)setRange:(struct _NSRange )arg0 ;


@end


#endif