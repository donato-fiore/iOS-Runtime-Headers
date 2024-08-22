// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXADVERTISEMENTCOMPONENTVIEWFACTORY_H
#define SXADVERTISEMENTCOMPONENTVIEWFACTORY_H

@protocol TFResolver;


#import "SXResolverComponentViewFactory.h"

@interface SXAdvertisementComponentViewFactory : SXResolverComponentViewFactory

@property (readonly, nonatomic) NSObject<TFResolver> *resolver; // ivar: _resolver


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithResolver:(id)arg0 ;
-(id)type;
-(int)role;


@end


#endif