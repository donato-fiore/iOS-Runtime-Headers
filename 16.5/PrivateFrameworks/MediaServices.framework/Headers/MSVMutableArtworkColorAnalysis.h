// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVMUTABLEARTWORKCOLORANALYSIS_H
#define MSVMUTABLEARTWORKCOLORANALYSIS_H

@class NSString;


#import "MSVArtworkColorAnalysis.h"

@interface MSVMutableArtworkColorAnalysis : MSVArtworkColorAnalysis

@property (retain, nonatomic) NSString *backgroundColorHex;
@property (nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (retain, nonatomic) NSString *primaryTextColorHex;
@property (nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (retain, nonatomic) NSString *secondaryTextColorHex;
@property (nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setPrimaryTextColor:(id)arg0 ;
-(void)setSecondaryTextColor:(id)arg0 ;


@end


#endif