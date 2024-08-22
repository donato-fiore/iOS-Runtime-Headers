// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXIMAGEVIEWFACTORY_H
#define SXIMAGEVIEWFACTORY_H

@class NSString;
@protocol SXImageViewFactory, SWReachabilityProvider, SXResourceDataSourceProvider;

#import <Foundation/Foundation.h>


@interface SXImageViewFactory : NSObject <SXImageViewFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, nonatomic) NSObject<SXResourceDataSourceProvider> *resourceDataSourceProvider; // ivar: _resourceDataSourceProvider
@property (readonly) Class superclass;


-(id)imageViewForResource:(id)arg0 ;
-(id)initWithResourceDataSourceProvider:(id)arg0 reachabilityProvider:(id)arg1 ;
-(id)repeatableImageViewForResource:(id)arg0 ;


@end


#endif