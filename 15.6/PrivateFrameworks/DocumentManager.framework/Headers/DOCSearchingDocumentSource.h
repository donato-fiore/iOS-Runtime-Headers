// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCSEARCHINGDOCUMENTSOURCE_H
#define DOCSEARCHINGDOCUMENTSOURCE_H

@class FPProviderDomain;


#import "DOCDocumentSource.h"

@interface DOCSearchingDocumentSource : DOCDocumentSource {
    FPProviderDomain *_providerDomain;
}




-(id)icon;
-(id)initWithProviderDomain:(id)arg0 ;
-(id)supportedSearchFilters;
-(void)setIcon:(id)arg0 ;


@end


#endif