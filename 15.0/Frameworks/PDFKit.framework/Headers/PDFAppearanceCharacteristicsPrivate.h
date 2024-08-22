// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFAPPEARANCECHARACTERISTICSPRIVATE_H
#define PDFAPPEARANCECHARACTERISTICSPRIVATE_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface PDFAppearanceCharacteristicsPrivate : NSObject {
    UIColor *backgroundColor;
    UIColor *borderColor;
    NSInteger rotation;
    NSInteger controlType;
    NSString *caption;
    NSString *rolloverCaption;
    NSString *downCaption;
    *CGPDFForm icon;
    int scaleCircumstance;
    BOOL scaleProportional;
}






@end


#endif