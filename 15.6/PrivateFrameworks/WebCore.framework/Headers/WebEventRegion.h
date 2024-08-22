// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBEVENTREGION_H
#define WEBEVENTREGION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WebEventRegion : NSObject <NSCopying>

 {
    CGPoint p1;
    CGPoint p2;
    CGPoint p3;
    CGPoint p4;
}




-(BOOL)hitTest:(struct CGPoint )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPoints:(struct CGPoint )arg0 ;
-(struct CGPoint )p1;
-(struct CGPoint )p2;
-(struct CGPoint )p3;
-(struct CGPoint )p4;
-(struct FloatQuad )quad;


@end


#endif