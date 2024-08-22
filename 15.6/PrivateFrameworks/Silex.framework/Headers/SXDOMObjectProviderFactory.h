// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDOMOBJECTPROVIDERFACTORY_H
#define SXDOMOBJECTPROVIDERFACTORY_H

@class NSString;
@protocol SXDOMObjectProviderFactory, SXDocumentControllerProvider;

#import <Foundation/Foundation.h>

#import "SXJSONObjectMerger.h"

@interface SXDOMObjectProviderFactory : NSObject <SXDOMObjectProviderFactory>



@property (readonly, nonatomic) SXJSONObjectMerger *componentStyleMerger; // ivar: _componentStyleMerger
@property (readonly, nonatomic) SXJSONObjectMerger *componentTextStyleMerger; // ivar: _componentTextStyleMerger
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentControllerProvider> *documentControllerProvider; // ivar: _documentControllerProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createDOMObjectProvider;
-(id)initWithDocumentControllerProvider:(id)arg0 componentStyleMerger:(id)arg1 componentTextStyleMerger:(id)arg2 ;


@end


#endif