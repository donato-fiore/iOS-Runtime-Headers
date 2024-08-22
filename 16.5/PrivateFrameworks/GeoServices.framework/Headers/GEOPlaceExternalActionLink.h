// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACEEXTERNALACTIONLINK_H
#define GEOPLACEEXTERNALACTIONLINK_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "GEOPDLink.h"
#import "GEOPlaceExternalActionLinkAppClipParams.h"
#import "GEOQuickLink.h"
#import "GEOAttributionApp.h"
#import "GEOPlaceExternalActionLinkQuickLinkParams.h"
#import "GEOPlaceExternalActionLinkExtensionParams.h"

@interface GEOPlaceExternalActionLink : NSObject {
    GEOPDLink *_actionLink;
    NSMapTable *_attributionMap;
}


@property (readonly, nonatomic) GEOPlaceExternalActionLinkAppClipParams *appClipParams;
@property (readonly, nonatomic) GEOQuickLink *appClipRepresentedAsQuickLink;
@property (readonly, nonatomic) GEOAttributionApp *attributionAppForMapsExtension;
@property (readonly, nonatomic) GEOQuickLink *quickLink;
@property (readonly, nonatomic) GEOPlaceExternalActionLinkQuickLinkParams *quickLinkParams;
@property (readonly, nonatomic) GEOPlaceExternalActionLinkExtensionParams *siriExtensionParams;
@property (readonly, nonatomic) int type;


-(id)appClipUsingArtworkURL:(id)arg0 title:(id)arg1 ;
-(id)initWithLinkData:(id)arg0 attributionMap:(id)arg1 ;


@end


#endif