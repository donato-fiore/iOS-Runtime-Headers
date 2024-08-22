// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOMAPFEATURETILEFINDERREQUEST_H
#define _GEOMAPFEATURETILEFINDERREQUEST_H

@class NSString;
@protocol GEOMapFeatureAccessRequest;

#import <Foundation/Foundation.h>

#import "GEOMapFeatureTileFinder.h"

@interface _GEOMapFeatureTileFinderRequest : NSObject <GEOMapFeatureAccessRequest>

 {
    GEOMapFeatureTileFinder *_tileFinder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTileFinder:(id)arg0 ;
-(void)cancel;


@end


#endif