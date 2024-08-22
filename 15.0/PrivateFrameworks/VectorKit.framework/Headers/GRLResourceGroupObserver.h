// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GRLRESOURCEGROUPOBSERVER_H
#define GRLRESOURCEGROUPOBSERVER_H

@class NSString;
@protocol GEOResourceManifestTileGroupObserver;

#import <Foundation/Foundation.h>


@interface GRLResourceGroupObserver : NSObject <GEOResourceManifestTileGroupObserver>

 {
    *void _resourceProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithResourceProvider:(*void)arg0 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;


@end


#endif