// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXWEBCONTENTCOMPONENTVIEWFACTORY_H
#define SXWEBCONTENTCOMPONENTVIEWFACTORY_H

@class NSString;
@protocol SXComponentViewFactory;


#import "SXResolverComponentViewFactory.h"

@interface SXWebContentComponentViewFactory : SXResolverComponentViewFactory <SXComponentViewFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(Class)componentViewClass;


@end


#endif