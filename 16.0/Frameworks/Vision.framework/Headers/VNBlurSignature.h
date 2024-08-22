// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNBLURSIGNATURE_H
#define VNBLURSIGNATURE_H


#import <Foundation/Foundation.h>


@interface VNBlurSignature : NSObject {
    *void _signatureData;
}




+(id)computeBlurSignatureForGrayscaleImage:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(*void)getSignatureData;
-(id)initWithSignatureData:(*void)arg0 ;
-(void)dealloc;
-(void)setSignatureData:(*void)arg0 ;


@end


#endif