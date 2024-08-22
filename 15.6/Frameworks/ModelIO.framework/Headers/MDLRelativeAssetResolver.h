// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLRELATIVEASSETRESOLVER_H
#define MDLRELATIVEASSETRESOLVER_H

@class NSString;
@protocol MDLAssetResolver;

#import <Foundation/Foundation.h>

#import "MDLAsset.h"

@interface MDLRelativeAssetResolver : NSObject <MDLAssetResolver>



@property (weak, nonatomic) MDLAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canResolveAssetNamed:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(id)resolveAssetNamed:(id)arg0 ;


@end


#endif