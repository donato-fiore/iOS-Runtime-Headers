// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTPAPER_H
#define UIPRINTPAPER_H


#import <Foundation/Foundation.h>


@interface UIPrintPaper : NSObject {
    int _paperOrientation;
    id *_internal;
}


@property (readonly) CGSize paperSize;
@property (readonly) CGRect printableRect;


+(id)_defaultPKPaperForOuptutType:(NSInteger)arg0 ;
+(id)_defaultPaperForOutputType:(NSInteger)arg0 ;
+(id)_defaultPaperListForOutputType:(NSInteger)arg0 ;
+(id)_genericPaperListForOutputType:(NSInteger)arg0 ;
+(id)_readyDocumentPaperListForPrinter:(id)arg0 withDuplexMode:(NSInteger)arg1 contentSize:(struct CGSize )arg2 scaleUpForRoll:(BOOL)arg3 ;
+(id)_readyPaperListForPrinter:(id)arg0 withDuplexMode:(NSInteger)arg1 forContentType:(NSInteger)arg2 contentSize:(struct CGSize )arg3 ;
+(id)bestPaperForPageSize:(struct CGSize )arg0 andContentType:(NSInteger)arg1 withPapersFromArray:(id)arg2 ;
+(id)bestPaperForPageSize:(struct CGSize )arg0 withPapersFromArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithPrintKitPaper:(id)arg0 ;
-(id)_keywordForPDFMetadata;
-(id)_localizedMediaTypeName;
-(id)_localizedName;
-(id)_pkPaper;
-(id)description;
-(int)_paperOrientation;
-(struct CGRect )_printableRectForDuplex:(BOOL)arg0 ;
-(struct CGRect )printRect;
-(void)_setPaperOrientation:(int)arg0 ;
-(void)_updatePKPaper:(id)arg0 ;


@end


#endif