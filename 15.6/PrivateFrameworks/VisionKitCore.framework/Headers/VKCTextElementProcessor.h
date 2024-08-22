// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCTEXTELEMENTPROCESSOR_H
#define VKCTEXTELEMENTPROCESSOR_H


#import <Foundation/Foundation.h>


@interface VKCTextElementProcessor : NSObject



+(id)dataDetectorElementFromVNBarcodeObservation:(id)arg0 loggingIndex:(NSInteger)arg1 ;
+(id)dataDetectorsFromCRDocumentOutputRegion:(id)arg0 shouldFilter:(BOOL)arg1 ;
+(id)textElementsFromCRDocumentOutputRegion:(id)arg0 ;


@end


#endif