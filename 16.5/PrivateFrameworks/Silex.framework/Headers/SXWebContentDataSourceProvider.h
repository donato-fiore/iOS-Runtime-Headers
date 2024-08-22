// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXWEBCONTENTDATASOURCEPROVIDER_H
#define SXWEBCONTENTDATASOURCEPROVIDER_H

@class NSString;
@protocol SXWebContentDataSourceProviding, SXDOMObjectProviding, SXResourceDataSourceProvider;

#import <Foundation/Foundation.h>


@interface SXWebContentDataSourceProvider : NSObject <SXWebContentDataSourceProviding>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXResourceDataSourceProvider> *resourceDataSourceProvider; // ivar: _resourceDataSourceProvider
@property (readonly) Class superclass;


-(id)dataSourcesForReferences:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 resourceDataSourceProvider:(id)arg1 ;


@end


#endif