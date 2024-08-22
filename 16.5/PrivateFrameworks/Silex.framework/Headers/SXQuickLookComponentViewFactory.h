// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXQUICKLOOKCOMPONENTVIEWFACTORY_H
#define SXQUICKLOOKCOMPONENTVIEWFACTORY_H

@protocol SXQuickLookComponentFileProvider, SXQuickLookModule;


#import "SXComponentViewFactory.h"

@interface SXQuickLookComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXQuickLookComponentFileProvider> *fileProvider; // ivar: _fileProvider
@property (readonly, nonatomic) NSObject<SXQuickLookModule> *quickLookModule; // ivar: _quickLookModule


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 fileProvider:(id)arg4 quickLookModule:(id)arg5 ;
-(id)type;
-(int)role;


@end


#endif