// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMADVIREMOVEBACKGROUNDRESOURCE_H
#define VCPMADVIREMOVEBACKGROUNDRESOURCE_H



#import "VCPMADVisionResource.h"
#import "VCPMADVIRemoveBackgroundCachedImageHandler.h"

@interface VCPMADVIRemoveBackgroundResource : VCPMADVisionResource

@property (retain, nonatomic) VCPMADVIRemoveBackgroundCachedImageHandler *cachedImageHandler; // ivar: _cachedImageHandler
@property (nonatomic) BOOL maskOnly; // ivar: _maskOnly


+(id)sharedResource;
-(NSInteger)activeCost;
-(NSInteger)inactiveCost;
-(void)purge;


@end


#endif