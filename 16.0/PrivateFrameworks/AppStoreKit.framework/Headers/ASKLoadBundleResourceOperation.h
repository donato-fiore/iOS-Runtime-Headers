// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASKLOADBUNDLERESOURCEOPERATION_H
#define ASKLOADBUNDLERESOURCEOPERATION_H

@class NSString, NSArray;


#import "ASKLoadResourceOperation.h"

@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *resourceName; // ivar: _resourceName
@property (readonly, copy, nonatomic) NSArray *searchBundles; // ivar: _searchBundles


+(id)supportedScheme;
-(id)initWithResourceName:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 dataConsumer:(id)arg1 ;
-(void)main;


@end


#endif