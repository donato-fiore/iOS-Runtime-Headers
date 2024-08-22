// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUXPHOTOSDETAILSLOCATIONSEARCHVIEWSWIFTFACTORY_H
#define PUXPHOTOSDETAILSLOCATIONSEARCHVIEWSWIFTFACTORY_H

@class NSString;
@protocol PXPhotosDetailsLocationSearchViewSwiftFactory;

#import <Foundation/Foundation.h>


@interface PUXPhotosDetailsLocationSearchViewSwiftFactory : NSObject <PXPhotosDetailsLocationSearchViewSwiftFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)searchViewControllerWithAssets:(id)arg0 delegate:(id)arg1 ;
+(id)searchViewControllerWithAssets:(id)arg0 delegate:(id)arg1 completion:(id)arg2 ;


@end


#endif