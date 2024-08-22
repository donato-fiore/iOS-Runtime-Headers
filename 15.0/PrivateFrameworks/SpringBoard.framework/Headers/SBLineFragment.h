// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLINEFRAGMENT_H
#define SBLINEFRAGMENT_H


#import <Foundation/Foundation.h>


@interface SBLineFragment : NSObject

@property (nonatomic) NSUInteger index; // ivar: _index
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) _NSRange range; // ivar: _range


+(id)fragmentWithIndex:(NSUInteger)arg0 length:(NSUInteger)arg1 lineWidth:(CGFloat)arg2 ;
-(id)description;


@end


#endif