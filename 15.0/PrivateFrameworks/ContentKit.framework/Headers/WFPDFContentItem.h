// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPDFCONTENTITEM_H
#define WFPDFCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"

@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>





+(id)contentCategories;
+(id)countDescription;
+(id)itemWithPrintFormatters:(id)arg0 names:(id)arg1 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
+(void)getPDFFromPrintFormatters:(id)arg0 nameIfKnown:(id)arg1 matchingInputSize:(BOOL)arg2 withMargin:(BOOL)arg3 startingAtPage:(NSInteger)arg4 endingAtPage:(NSInteger)arg5 completionHandler:(id)arg6 ;
+(void)initialize;
-(void)createImageWithFileType:(id)arg0 colorspace:(struct CGColorSpace *)arg1 resolution:(CGFloat)arg2 completion:(id)arg3 ;
-(void)enumeratePagesInDocument:(id)arg0 block:(id)arg1 ;
// -(void)generateFileRepresentations:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
// -(void)getPDF:(id)arg0 matchingInputSize:(unk)arg1 withMargin:(BOOL)arg2 startingAtPage:(BOOL)arg3 endingAtPage:(NSInteger)arg4  ;


@end


#endif