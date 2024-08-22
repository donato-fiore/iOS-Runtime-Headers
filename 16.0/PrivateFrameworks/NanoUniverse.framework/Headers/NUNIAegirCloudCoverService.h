// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNIAEGIRCLOUDCOVERSERVICE_H
#define NUNIAEGIRCLOUDCOVERSERVICE_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "_TtC12NanoUniverse22AegirCloudCoverService.h"

@interface NUNIAegirCloudCoverService : NSObject {
    _TtC12NanoUniverse22AegirCloudCoverService *_cloudService;
}


@property (retain, nonatomic) NSURL *directory;


-(BOOL)shouldFetchData;
-(id)initWithImageScale:(float)arg0 ;
-(void)retrieveCloudTextureURLs:(id)arg0 ;


@end


#endif