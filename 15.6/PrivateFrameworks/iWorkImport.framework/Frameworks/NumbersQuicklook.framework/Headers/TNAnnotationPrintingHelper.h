// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNANNOTATIONPRINTINGHELPER_H
#define TNANNOTATIONPRINTINGHELPER_H

@protocol TNAdditionalContentProviding, TNAnnotationPrintingHelperDataSource;

#import <Foundation/Foundation.h>


@interface TNAnnotationPrintingHelper : NSObject <TNAdditionalContentProviding>



@property (readonly, weak, nonatomic) NSObject<TNAnnotationPrintingHelperDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) CGFloat heightForAdditionalContent;
@property (readonly, nonatomic) NSUInteger numberOfAdditionalPages;


-(BOOL)hasOverlayContent;
-(BOOL)hasOverlayContentForPageIndex:(NSUInteger)arg0 ;
-(id)initWithDataSource:(id)arg0 documentLocale:(id)arg1 ;
-(void)drawContentForAdditionalPage:(NSUInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawOverlayContentForPageIndex:(NSUInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawOverlayContentInContext:(struct CGContext *)arg0 ;


@end


#endif