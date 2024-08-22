// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUIHASHBUILDER_H
#define ARUIHASHBUILDER_H


#import <Foundation/Foundation.h>


@interface ARUIHashBuilder : NSObject {
    NSUInteger _hash;
}




+(id)builder;
-(NSUInteger)hash;
-(NSUInteger)hashForCGFloat:(CGFloat)arg0 ;
-(NSUInteger)hashForDouble:(CGFloat)arg0 ;
-(NSUInteger)hashForFloat:(float)arg0 ;
-(NSUInteger)hashForNSTimeInterval:(CGFloat)arg0 ;
-(id)init;
-(void)appendBool:(BOOL)arg0 ;
-(void)appendCGFloat:(CGFloat)arg0 ;
-(void)appendCGRect:(struct CGRect )arg0 ;
-(void)appendDouble:(CGFloat)arg0 ;
-(void)appendFloat2;
-(void)appendFloat4;
-(void)appendFloat4x4:(struct ? )arg0 ;
-(void)appendFloat:(float)arg0 ;
-(void)appendInt:(NSInteger)arg0 ;
-(void)appendObject:(id)arg0 ;
-(void)appendTimeInterval:(CGFloat)arg0 ;
-(void)appendUnsignedInt:(NSUInteger)arg0 ;


@end


#endif