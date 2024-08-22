// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBPLAINWHITEVIEW_H
#define WEBPLAINWHITEVIEW_H

@class WAKView, NSString;
@protocol WebDocumentView, WebDocumentElement;



@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)elementAtPoint:(struct CGPoint )arg0 ;
-(id)elementAtPoint:(struct CGPoint )arg0 allowShadowContent:(BOOL)arg1 ;
-(void)dataSourceUpdated:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layout;
-(void)setDataSource:(id)arg0 ;
-(void)setNeedsLayout:(BOOL)arg0 ;
-(void)viewDidMoveToHostWindow;
-(void)viewWillMoveToHostWindow:(id)arg0 ;


@end


#endif