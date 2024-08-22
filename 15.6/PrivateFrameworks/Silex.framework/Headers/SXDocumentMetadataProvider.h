// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDOCUMENTMETADATAPROVIDER_H
#define SXDOCUMENTMETADATAPROVIDER_H

@class NSString;
@protocol SXDocumentMetadataProviding, SXDocumentTitleProviding, SXDocumentLanguageProviding, SXAutoPlacementProviding, SXAutoPlacement, SXDocumentProviding;

#import <Foundation/Foundation.h>

#import "SXMetadata.h"

@interface SXDocumentMetadataProvider : NSObject <SXDocumentMetadataProviding, SXDocumentTitleProviding, SXDocumentLanguageProviding, SXAutoPlacementProviding>



@property (readonly, nonatomic) NSObject<SXAutoPlacement> *autoPlacement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentProviding> *documentProvider; // ivar: _documentProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) SXMetadata *metadata;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


-(id)initWithDocumentProvider:(id)arg0 ;


@end


#endif