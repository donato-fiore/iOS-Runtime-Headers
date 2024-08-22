// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLVECTOR_H
#define TMLVECTOR_H

@protocol TMLVectorJSExports, NSCopying;

#import <Foundation/Foundation.h>


@interface TMLVector : NSObject <TMLVectorJSExports, NSCopying>



@property (readonly, nonatomic) CGFloat dx;
@property (readonly, nonatomic) CGFloat dy;
@property (readonly, nonatomic) CGVector vector; // ivar: _vector


+(void)initializeJSContext:(id)arg0 ;
-(id)CGVectorValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithVector:(struct CGVector )arg0 ;


@end


#endif