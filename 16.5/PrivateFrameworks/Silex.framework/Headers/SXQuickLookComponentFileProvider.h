// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXQUICKLOOKCOMPONENTFILEPROVIDER_H
#define SXQUICKLOOKCOMPONENTFILEPROVIDER_H

@class NSString;
@protocol SXQuickLookComponentFileProvider, SXDOMObjectProviding, SXResourceDataSourceProvider, SXDocumentShareURLProvider;

#import <Foundation/Foundation.h>


@interface SXQuickLookComponentFileProvider : NSObject <SXQuickLookComponentFileProvider>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXResourceDataSourceProvider> *resourceDataSourceProvider; // ivar: _resourceDataSourceProvider
@property (readonly, nonatomic) NSObject<SXDocumentShareURLProvider> *shareURLProvider; // ivar: _shareURLProvider
@property (readonly) Class superclass;


-(id)copyFileIfNeeded:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(id)initWithDOMObjectProvider:(id)arg0 resourceDataSourceProvider:(id)arg1 shareURLProvider:(id)arg2 ;
// -(void)fileForComponent:(id)arg0 onCompletion:(id)arg1 onError:(unk)arg2  ;


@end


#endif