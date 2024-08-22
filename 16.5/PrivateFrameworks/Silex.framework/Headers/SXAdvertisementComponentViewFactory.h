// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXADVERTISEMENTCOMPONENTVIEWFACTORY_H
#define SXADVERTISEMENTCOMPONENTVIEWFACTORY_H

@protocol TFResolver;


#import "SXComponentViewFactory.h"

@interface SXAdvertisementComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<TFResolver> *resolver; // ivar: _resolver


-(id)componentViewForComponent:(id)arg0 ;
-(id)type;
-(int)role;


@end


#endif