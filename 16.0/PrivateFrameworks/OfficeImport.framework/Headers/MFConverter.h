// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCONVERTER_H
#define MFCONVERTER_H


#import <Foundation/Foundation.h>


@interface MFConverter : NSObject



+(BOOL)mapToPdf:(id)arg0 ;
+(id)play:(id)arg0 frame:(struct CGRect )arg1 colorMap:(id)arg2 fillMap:(id)arg3 ;
+(id)playToBitmap:(id)arg0 frame:(struct CGRect )arg1 colorMap:(id)arg2 fillMap:(id)arg3 ;
+(id)playToPDF:(id)arg0 frame:(struct CGRect )arg1 colorMap:(id)arg2 fillMap:(id)arg3 ;
+(struct CGRect )boundsInLogicalUnits:(id)arg0 ;
+(struct CGRect )boundsInPoints:(id)arg0 ;
+(void)fromBinary:(id)arg0 toXml:(id)arg1 ;
+(void)playInCurrentContext:(id)arg0 frame:(struct CGRect )arg1 colorMap:(id)arg2 fillMap:(id)arg3 ;


@end


#endif