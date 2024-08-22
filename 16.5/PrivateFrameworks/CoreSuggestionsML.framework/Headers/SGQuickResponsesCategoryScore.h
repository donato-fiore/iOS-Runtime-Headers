// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGQUICKRESPONSESCATEGORYSCORE_H
#define SGQUICKRESPONSESCATEGORYSCORE_H


#import <Foundation/Foundation.h>


@interface SGQuickResponsesCategoryScore : NSObject {
    NSUInteger _modelCount;
}


@property (readonly, nonatomic) CGFloat average; // ivar: _average
@property (readonly, nonatomic) CGFloat maximum; // ivar: _maximum


-(id)init;
-(void)addScore:(CGFloat)arg0 ;


@end


#endif