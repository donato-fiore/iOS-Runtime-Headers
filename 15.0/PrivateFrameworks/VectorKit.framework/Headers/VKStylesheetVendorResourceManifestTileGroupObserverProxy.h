// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKSTYLESHEETVENDORRESOURCEMANIFESTTILEGROUPOBSERVERPROXY_H
#define VKSTYLESHEETVENDORRESOURCEMANIFESTTILEGROUPOBSERVERPROXY_H

@class NSString;
@protocol GEOResourceManifestTileGroupObserver;

#import <Foundation/Foundation.h>


@interface VKStylesheetVendorResourceManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver>

 {
    weak_ptr<md::StylesheetVendor> _vendor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)initWithStylesheetVendor;
-(void)dealloc;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;


@end


#endif