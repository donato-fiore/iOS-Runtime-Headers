// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDOCUMENTCONTROLLER_H
#define SXDOCUMENTCONTROLLER_H

@class NSArray, NSMutableDictionary, NSString, UIColor;
@protocol SXDocumentShareURLProvider;

#import <Foundation/Foundation.h>

#import "SXJSONObjectMerger.h"
#import "SXDocument.h"
#import "SXImageController.h"
#import "SXMetadata.h"

@interface SXDocumentController : NSObject <SXDocumentShareURLProvider>



@property (readonly, nonatomic) NSArray *additions; // ivar: _additions
@property (readonly, nonatomic) NSArray *allImageResources;
@property (readonly, nonatomic) SXJSONObjectMerger *componentStyleMerger; // ivar: _componentStyleMerger
@property (retain, nonatomic) NSMutableDictionary *componentStyles; // ivar: _componentStyles
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXDocument *document; // ivar: _document
@property (readonly, nonatomic) UIColor *documentBackgroundColor;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXImageController *imageController; // ivar: _imageController
@property (readonly, nonatomic) SXMetadata *metadata;
@property (readonly, nonatomic) NSArray *requiredResourceURLs;
@property (readonly, nonatomic) NSString *shareURL; // ivar: _shareURL
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *topBackgroundColor;


-(id)additionsForComponents:(id)arg0 ;
-(id)componentIdentifierUsingThumbnail;
-(id)componentIdentifierUsingThumbnailInComponents:(id)arg0 ;
-(id)componentLayoutForIdentifier:(id)arg0 ;
-(id)componentStyleForComponent:(id)arg0 ;
-(id)filterImageResources;
-(id)imageResourceForIdentifier:(id)arg0 ;
-(id)initWithDocument:(id)arg0 shareURL:(id)arg1 ;
-(id)largestImageResourceForImageIdentifier:(id)arg0 ;
-(id)mergedObjectsWithIdentifiers:(id)arg0 fromDictionary:(id)arg1 merger:(id)arg2 ;
-(id)resourceForIdentifier:(id)arg0 ;


@end


#endif