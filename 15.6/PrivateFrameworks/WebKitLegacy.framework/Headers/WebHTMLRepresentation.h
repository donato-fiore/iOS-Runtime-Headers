// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBHTMLREPRESENTATION_H
#define WEBHTMLREPRESENTATION_H

@class NSString;
@protocol WebDocumentRepresentation, WebDocumentDOM;

#import <Foundation/Foundation.h>

#import "WebHTMLRepresentationPrivate.h"

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM>

 {
    WebHTMLRepresentationPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedImageMIMETypes;
+(id)supportedMIMETypes;
+(id)supportedMediaMIMETypes;
+(id)supportedNonImageMIMETypes;
+(id)unsupportedTextMIMETypes;
-(BOOL)_isDisplayingWebArchive;
-(BOOL)canProvideDocumentSource;
-(BOOL)canSaveAsWebArchive;
-(BOOL)elementDoesAutoComplete:(id)arg0 ;
-(BOOL)elementIsPassword:(id)arg0 ;
-(id)DOMDocument;
-(id)controlsInForm:(id)arg0 ;
-(id)currentForm;
-(id)documentSource;
-(id)elementWithName:(id)arg0 inForm:(id)arg1 ;
-(id)formForElement:(id)arg0 ;
-(id)init;
-(id)matchLabels:(id)arg0 againstElement:(id)arg1 ;
-(id)searchForLabels:(id)arg0 beforeElement:(id)arg1 ;
-(id)searchForLabels:(id)arg0 beforeElement:(id)arg1 resultDistance:(*NSUInteger)arg2 resultIsInCellAbove:(*BOOL)arg3 ;
-(id)title;
-(void)_redirectDataToManualLoader:(id)arg0 forPluginView:(id)arg1 ;
-(void)dealloc;
-(void)finishedLoadingWithDataSource:(id)arg0 ;
-(void)receivedData:(id)arg0 withDataSource:(id)arg1 ;
-(void)receivedError:(id)arg0 withDataSource:(id)arg1 ;
-(void)setDataSource:(id)arg0 ;


@end


#endif