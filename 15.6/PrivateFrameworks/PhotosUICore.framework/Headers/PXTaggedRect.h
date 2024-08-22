// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTAGGEDRECT_H
#define PXTAGGEDRECT_H


#import <Foundation/Foundation.h>


@interface PXTaggedRect : NSObject

@property (readonly, nonatomic) CGRect rect; // ivar: _rect
@property (readonly, nonatomic) NSUInteger tag; // ivar: _tag


-(id)description;
-(id)init;
-(id)initWithRect:(struct CGRect )arg0 tag:(NSUInteger)arg1 ;


@end


#endif