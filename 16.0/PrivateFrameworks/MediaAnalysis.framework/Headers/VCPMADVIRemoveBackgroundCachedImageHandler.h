// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMADVIREMOVEBACKGROUNDCACHEDIMAGEHANDLER_H
#define VCPMADVIREMOVEBACKGROUNDCACHEDIMAGEHANDLER_H

@class NSString, VNImageRequestHandler;

#import <Foundation/Foundation.h>


@interface VCPMADVIRemoveBackgroundCachedImageHandler : NSObject {
    NSString *_identifier;
    CGSize _resolution;
    unsigned int _orientation;
}


@property (readonly, nonatomic) CGRect regionOfInterest; // ivar: _regionOfInterest
@property (readonly, nonatomic) VNImageRequestHandler *requestHandler; // ivar: _requestHandler


-(BOOL)matchesImageAsset:(id)arg0 ;
-(id)initWithImageAsset:(id)arg0 requestHandler:(id)arg1 regionOfInterest:(struct CGRect )arg2 ;


@end


#endif