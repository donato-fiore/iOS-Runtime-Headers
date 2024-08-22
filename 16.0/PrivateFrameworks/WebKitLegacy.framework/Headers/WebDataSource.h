// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBDATASOURCE_H
#define WEBDATASOURCE_H

@class NSDictionary, NSData, NSURLRequest, NSString, NSMutableURLRequest, NSURLResponse, NSArray, NSURL;
@protocol WebDocumentRepresentation;

#import <Foundation/Foundation.h>

#import "WebResource.h"
#import "WebArchive.h"
#import "WebFrame.h"

@interface WebDataSource : NSObject {
    *void _private;
}


@property (readonly, nonatomic) NSDictionary *_quickLookContent;
@property (copy, nonatomic, setter=_setQuickLookContent:) NSDictionary *_quickLookContent;
@property (nonatomic, setter=_setQuickLookPreviewLoaderClient:) *void _quickLookPreviewLoaderClient;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURLRequest *initialRequest;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) WebResource *mainResource;
@property (readonly, copy, nonatomic) NSString *pageTitle;
@property (readonly, nonatomic) NSObject<WebDocumentRepresentation> *representation;
@property (readonly, nonatomic) NSMutableURLRequest *request;
@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, copy, nonatomic) NSArray *subresources;
@property (readonly, copy, nonatomic) NSString *textEncodingName;
@property (readonly, nonatomic) NSURL *unreachableURL;
@property (readonly, nonatomic) WebArchive *webArchive;
@property (readonly, nonatomic) WebFrame *webFrame;


+(Class)_representationClassForMIMEType:(id)arg0 allowingPlugins:(BOOL)arg1 ;
+(id)_repTypesAllowImageTypeOmission:(BOOL)arg0 ;
+(void)initialize;
-(BOOL)_isDocumentHTML;
-(id)_URL;
-(id)_documentFragmentWithArchive:(id)arg0 ;
-(id)_documentFragmentWithImageResource:(id)arg0 ;
-(id)_imageElementWithImageResource:(id)arg0 ;
-(id)_initWithDocumentLoader:(*void)arg0 ;
-(id)_mainDocumentError;
-(id)_webView;
-(id)initWithRequest:(id)arg0 ;
-(id)subresourceForURL:(id)arg0 ;
-(struct NakedPtr<WebCore::DocumentLoader> )_documentLoader;
-(void)_addSubframeArchives:(id)arg0 ;
-(void)_finishedLoading;
-(void)_makeRepresentation;
-(void)_receivedData:(id)arg0 ;
-(void)_replaceSelectionWithArchive:(id)arg0 selectReplacement:(BOOL)arg1 ;
-(void)_revertToProvisionalState;
-(void)_setAllowToBeMemoryMapped;
-(void)_setDeferMainResourceDataLoad:(BOOL)arg0 ;
-(void)_setMainDocumentError:(id)arg0 ;
-(void)_setOverrideTextEncodingName:(id)arg0 ;
-(void)addSubresource:(id)arg0 ;
-(void)dealloc;


@end


#endif