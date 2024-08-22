// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFROUTER_H
#define NFROUTER_H

@class NSString;
@protocol NFRouter, NFResolver;

#import <Foundation/Foundation.h>


@interface NFRouter : NSObject <NFRouter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NFResolver> *resolver; // ivar: _resolver
@property (readonly) Class superclass;


-(id)initWithResolver:(id)arg0 ;
-(id)resolveRoutable:(id)arg0 ;


@end


#endif