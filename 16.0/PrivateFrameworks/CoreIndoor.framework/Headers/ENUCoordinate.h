// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENUCOORDINATE_H
#define ENUCOORDINATE_H


#import <Foundation/Foundation.h>


@interface ENUCoordinate : NSObject

@property (nonatomic) CGFloat east; // ivar: _east
@property (nonatomic) CGFloat north; // ivar: _north
@property (nonatomic) CGFloat up; // ivar: _up


+(id)fromLatLonOrigin:(id)arg0 andEcefOrigin:(id)arg1 andEcefPoint:(id)arg2 ;
-(id)init;
-(id)initWithEast:(CGFloat)arg0 north:(CGFloat)arg1 up:(CGFloat)arg2 ;
-(void)setFromLatLonOrigin:(id)arg0 andEcefOrigin:(id)arg1 andEcefPoint:(id)arg2 ;


@end


#endif