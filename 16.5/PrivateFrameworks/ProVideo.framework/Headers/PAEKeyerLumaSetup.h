// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEKEYERLUMASETUP_H
#define PAEKEYERLUMASETUP_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PAEKeyerLumaSetup : NSObject <NSSecureCoding>

 {
    NSNumber *_lumA;
    NSNumber *_lumB;
    NSNumber *_lumC;
    NSNumber *_lumD;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqualTo:(id)arg0 ;
-(float)lumA;
-(float)lumB;
-(float)lumC;
-(float)lumD;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)interpolateBetween:(id)arg0 withWeight:(float)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLumA:(float)arg0 ;
-(void)setLumANumber:(id)arg0 ;
-(void)setLumB:(float)arg0 ;
-(void)setLumBNumber:(id)arg0 ;
-(void)setLumC:(float)arg0 ;
-(void)setLumCNumber:(id)arg0 ;
-(void)setLumD:(float)arg0 ;
-(void)setLumDNumber:(id)arg0 ;


@end


#endif