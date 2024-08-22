// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACEEXTERNALACTIONLINKAPPCLIPPARAMS_H
#define GEOPLACEEXTERNALACTIONLINKAPPCLIPPARAMS_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "GEOPDAppClipParams.h"

@interface GEOPlaceExternalActionLinkAppClipParams : NSObject {
    GEOPDAppClipParams *_appClipParams;
}


@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSURL *url;


-(id)initWithAppClipParams:(id)arg0 ;


@end


#endif