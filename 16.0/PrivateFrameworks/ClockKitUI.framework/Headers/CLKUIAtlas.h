// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKUIATLAS_H
#define CLKUIATLAS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLKUIAtlas : NSObject {
    uint8_t _instanceCount;
}


@property (nonatomic) CGFloat boundTime; // ivar: _boundTime
@property (readonly, nonatomic) NSUInteger height; // ivar: _height
@property (readonly, nonatomic) NSInteger instanceCount;
@property (readonly) BOOL isPurgable;
@property (nonatomic) NSUInteger memoryCost; // ivar: _memoryCost
@property (nonatomic) NSUInteger status; // ivar: _status
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSUInteger width; // ivar: _width


-(id)backing;
-(id)initWithUuid:(id)arg0 ;
-(void)decrementInstanceCount;
-(void)incrementInstanceCount;


@end


#endif