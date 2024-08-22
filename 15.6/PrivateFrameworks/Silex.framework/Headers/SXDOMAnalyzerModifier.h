// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDOMANALYZERMODIFIER_H
#define SXDOMANALYZERMODIFIER_H

@class NSString;
@protocol SXDOMModifying;

#import <Foundation/Foundation.h>


@interface SXDOMAnalyzerModifier : NSObject <SXDOMModifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)analyzeButtonComponent:(id)arg0 analysis:(id)arg1 ;
-(void)analyzeComponents:(id)arg0 parent:(id)arg1 DOM:(id)arg2 ;
-(void)analyzeDataTableCellStyle:(id)arg0 component:(id)arg1 analysis:(id)arg2 ;
-(void)analyzeDataTableComponent:(id)arg0 DOM:(id)arg1 ;
-(void)analyzeDataTableStyle:(id)arg0 component:(id)arg1 analysis:(id)arg2 ;
-(void)analyzeFormattedText:(id)arg0 component:(id)arg1 analysis:(id)arg2 ;
-(void)analyzeGalleryComponent:(id)arg0 analysis:(id)arg1 ;
-(void)analyzeInlineTextStyle:(id)arg0 component:(id)arg1 analysis:(id)arg2 ;
-(void)analyzeScalableImageComponent:(id)arg0 analysis:(id)arg1 ;
-(void)analyzeTextComponent:(id)arg0 analysis:(id)arg1 ;
-(void)modifyDOM:(id)arg0 context:(id)arg1 ;


@end


#endif