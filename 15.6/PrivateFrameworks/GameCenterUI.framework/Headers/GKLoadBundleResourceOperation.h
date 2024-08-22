// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLOADBUNDLERESOURCEOPERATION_H
#define GKLOADBUNDLERESOURCEOPERATION_H

@class NSString, NSArray;


#import "GKLoadResourceOperation.h"

@interface GKLoadBundleResourceOperation : GKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *resourceName; // ivar: _resourceName
@property (readonly, copy, nonatomic) NSArray *searchBundles; // ivar: _searchBundles


-(id)initWithResourceName:(id)arg0 searchBundles:(id)arg1 ;
-(void)main;


@end


#endif