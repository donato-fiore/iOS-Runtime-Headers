// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXRESOLVERCOMPONENTVIEWFACTORY_H
#define SXRESOLVERCOMPONENTVIEWFACTORY_H

@class NSString;
@protocol SXComponentViewFactory, TFResolver;

#import <Foundation/Foundation.h>


@interface SXResolverComponentViewFactory : NSObject <SXComponentViewFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TFResolver> *resolver; // ivar: _resolver
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(Class)componentViewClass;
-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithResolver:(id)arg0 ;


@end


#endif