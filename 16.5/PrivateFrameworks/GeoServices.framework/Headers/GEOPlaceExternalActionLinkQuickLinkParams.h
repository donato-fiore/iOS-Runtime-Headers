// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACEEXTERNALACTIONLINKQUICKLINKPARAMS_H
#define GEOPLACEEXTERNALACTIONLINKQUICKLINKPARAMS_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "GEOPDQuickLinkActionDataParams.h"

@interface GEOPlaceExternalActionLinkQuickLinkParams : NSObject {
    GEOPDQuickLinkActionDataParams *_quickLinkParams;
}


@property (readonly, nonatomic) NSString *appAdamId;
@property (readonly, nonatomic) NSURL *url;


-(id)initWithQuickLinkParams:(id)arg0 ;


@end


#endif