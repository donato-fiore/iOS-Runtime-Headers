// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDATATABLECOMPONENTSIZER_H
#define SXDATATABLECOMPONENTSIZER_H

@class NSString;
@protocol SXDataTableComponentControllerDataSource, SXLayoutContext, SXTextComponentLayoutHosting;


#import "SXComponentSizer.h"
#import "SXDataTableComponentController.h"
#import "SXDataTableLayouter.h"

@interface SXDataTableComponentSizer : SXComponentSizer <SXDataTableComponentControllerDataSource>



@property (retain, nonatomic) NSObject<SXLayoutContext> *currentLayoutContext; // ivar: _currentLayoutContext
@property (retain, nonatomic) SXDataTableComponentController *dataTableComponentController; // ivar: _dataTableComponentController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXDataTableLayouter *layouter; // ivar: _layouter
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<SXTextComponentLayoutHosting> *textComponentLayoutHosting; // ivar: _textComponentLayoutHosting


-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;
-(id)DOMObjectProviderForDataTableComponentController:(id)arg0 ;
-(id)componentForDataTableComponentController:(id)arg0 ;
-(id)contentSizeCategoryForDataTableComponentController:(id)arg0 ;
-(id)documentColumnLayoutForDataTableComponentController:(id)arg0 ;
-(id)initWithComponent:(id)arg0 componentLayout:(id)arg1 componentStyle:(id)arg2 DOMObjectProvider:(id)arg3 layoutOptions:(id)arg4 textComponentLayoutHosting:(id)arg5 textSourceFactory:(id)arg6 recordValueTransformerFactory:(id)arg7 ;
-(id)tableStyleForComponent:(id)arg0 ;
-(id)textComponentLayoutHostingForDataTableComponentController:(id)arg0 ;
-(id)unitConverterForDataTableComponentController:(id)arg0 ;


@end


#endif