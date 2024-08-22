// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXBUTTONCOMPONENTVIEWFACTORY_H
#define SXBUTTONCOMPONENTVIEWFACTORY_H

@class NSString;
@protocol SXComponentViewFactory, TFResolver;

#import <Foundation/Foundation.h>


@interface SXButtonComponentViewFactory : NSObject <SXComponentViewFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TFResolver> *resolver; // ivar: _resolver
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithResolver:(id)arg0 ;


@end


#endif