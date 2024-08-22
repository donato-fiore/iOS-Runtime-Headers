// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSFRANGEUTILS_H
#define CSFRANGEUTILS_H


#import <Foundation/Foundation.h>


@interface CSFRangeUtils : NSObject

@property (readonly, nonatomic) NSUInteger endPoint; // ivar: _endPoint
@property (readonly, nonatomic) NSUInteger startPoint; // ivar: _startPoint


-(BOOL)hasIntersectionWithRange:(id)arg0 ;
-(id)initWithStartPoint:(NSUInteger)arg0 endPoint:(NSUInteger)arg1 ;


@end


#endif