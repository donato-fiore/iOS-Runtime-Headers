// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFFORMAUTOFILLFRAME_H
#define SFFORMAUTOFILLFRAME_H

@class NSString, WKWebProcessPlugInFrame;
@protocol WBSFormAutoFillFrame;

#import <Foundation/Foundation.h>


@interface SFFormAutoFillFrame : NSObject <WBSFormAutoFillFrame>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WKWebProcessPlugInFrame *plugInFrame; // ivar: _plugInFrame
@property (readonly) Class superclass;


+(id)autoFillFrameWithWebProcessPlugInFrame:(id)arg0 ;
-(BOOL)containsAnyFormElements;
-(BOOL)isEqual:(id)arg0 ;
-(id)_formMetadataController;
-(id)_pageContoller;
-(id)committedURL;
-(id)initWithWebProcessPlugInFrame:(id)arg0 ;
-(id)pageMainFrame;
-(struct OpaqueFormAutoFillFrame *)frameRef;
-(struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;
-(struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg0 ;
-(void)enumerateChildFramesUsingBlock:(id)arg0 ;


@end


#endif