// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEKEYEROMVERTEX_H
#define PAEKEYEROMVERTEX_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PAEKeyerOMVertex : NSObject <NSSecureCoding>

 {
    NSNumber *_lx;
    NSNumber *_mx;
    NSNumber *_rx;
    NSNumber *_bx;
    NSNumber *_ly;
    NSNumber *_my;
    NSNumber *_ry;
    NSNumber *_by;
}




+(BOOL)supportsSecureCoding;
-(float)bx;
-(float)by;
-(float)lx;
-(float)ly;
-(float)mx;
-(float)my;
-(float)rx;
-(float)ry;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBx:(id)arg0 ;
-(void)setBy:(id)arg0 ;
-(void)setLx:(id)arg0 ;
-(void)setLy:(id)arg0 ;
-(void)setMx:(id)arg0 ;
-(void)setMy:(id)arg0 ;
-(void)setRx:(id)arg0 ;
-(void)setRy:(id)arg0 ;


@end


#endif