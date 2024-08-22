// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSINSPECTORCSSAGENT_H
#define IKJSINSPECTORCSSAGENT_H

@class NSMutableDictionary, RWIProtocolCSSStyleSheetHeader, NSMapTable, NSString;
@protocol RWIProtocolCSSDomainHandler;

#import <Foundation/Foundation.h>

#import "IKViewElementStyleFactory.h"
#import "IKJSInspectorController.h"

@interface IKJSInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler>

 {
    NSMutableDictionary *_inlineStyleMap;
    RWIProtocolCSSStyleSheetHeader *_templateStylesheetHeader;
    IKViewElementStyleFactory *_styleFactory;
    NSMapTable *_authorStylesheets;
}


@property (readonly, weak, nonatomic) IKJSInspectorController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)_evaluator:(id)arg0 updateMediaStylesWithActiveStyles:(id)arg1 inActiveStyles:(id)arg2 defaultStyles:(id)arg3 forRule:(id)arg4 withMatch:(id)arg5 ;
-(id)_getMatchedStyleRulesForNode:(id)arg0 ;
-(id)_getMatchedTemplateStylesForNode:(id)arg0 ;
-(id)_styleNodeForStylesheetId:(id)arg0 ;
-(id)_stylesheetBodyForStylesheetId:(id)arg0 ;
-(id)_updatedInlineStyleForNode:(int)arg0 withStyleString:(id)arg1 ;
-(id)initWithInspectorController:(id)arg0 ;
// -(void)disableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)enableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)getAllStyleSheetsWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)getComputedStyleForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getInlineStylesForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getMatchedStylesForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 includePseudo:(unk)arg3 includeInherited:(int)arg4  ;
// -(void)getStyleSheetTextWithErrorCallback:(id)arg0 successCallback:(unk)arg1 styleSheetId:(id)arg2  ;
// -(void)getStyleSheetWithErrorCallback:(id)arg0 successCallback:(unk)arg1 styleSheetId:(id)arg2  ;
// -(void)getSupportedCSSPropertiesWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
-(void)mediaQueryResultDidChange;
-(void)resetStylesFromNode:(id)arg0 ;
// -(void)setStyleSheetTextWithErrorCallback:(id)arg0 successCallback:(unk)arg1 styleSheetId:(id)arg2 text:(unk)arg3  ;
// -(void)setStyleTextWithErrorCallback:(id)arg0 successCallback:(unk)arg1 styleId:(id)arg2 text:(unk)arg3  ;
-(void)updateStylesheets;


@end


#endif