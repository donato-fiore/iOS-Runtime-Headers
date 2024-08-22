// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCSEARCHINGDOCUMENTSOURCE_H
#define DOCSEARCHINGDOCUMENTSOURCE_H

@class FPProviderDomain;


#import "DOCDocumentSource.h"

@interface DOCSearchingDocumentSource : DOCDocumentSource {
    FPProviderDomain *_providerDomain;
}




-(id)initWithProviderDomain:(id)arg0 ;
-(id)loadIconForSize:(NSInteger)arg0 ;
-(id)supportedSearchFilters;


@end


#endif