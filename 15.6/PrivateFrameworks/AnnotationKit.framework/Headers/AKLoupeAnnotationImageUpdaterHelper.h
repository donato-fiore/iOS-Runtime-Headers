// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKLOUPEANNOTATIONIMAGEUPDATERHELPER_H
#define AKLOUPEANNOTATIONIMAGEUPDATERHELPER_H


#import <Foundation/Foundation.h>


@interface AKLoupeAnnotationImageUpdaterHelper : NSObject



+(struct CGAffineTransform )transformForFastPathLayer:(id)arg0 ofLoupeAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(struct CGRect )magnifiedRectForUnmagnifiedRect:(struct CGRect )arg0 ofLoupeAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(struct CGRect )unmagnifiedRectForMagnifiedRect:(struct CGRect )arg0 ofLoupeAnnotation:(id)arg1 ;
+(void)updateFastPathImageOnLoupeAnnotation:(id)arg0 withFastPathLayer:(id)arg1 onPageController:(id)arg2 ;
+(void)updateModelImageOnLoupeAnnotation:(id)arg0 onPageController:(id)arg1 ;


@end


#endif