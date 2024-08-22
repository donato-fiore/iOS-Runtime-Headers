// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLPOINT_H
#define TMLPOINT_H

@protocol TMLPointJSExports, NSCopying;

#import <Foundation/Foundation.h>


@interface TMLPoint : NSObject <TMLPointJSExports, NSCopying>



@property (readonly, nonatomic) CGPoint point; // ivar: _point
@property (readonly, nonatomic) CGFloat x;
@property (readonly, nonatomic) CGFloat y;


+(void)initializeJSContext:(id)arg0 ;
-(id)CGPointValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPoint:(struct CGPoint )arg0 ;


@end


#endif