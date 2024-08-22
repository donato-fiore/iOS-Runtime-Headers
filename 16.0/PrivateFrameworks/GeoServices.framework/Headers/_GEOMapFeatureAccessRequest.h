// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOMAPFEATUREACCESSREQUEST_H
#define _GEOMAPFEATUREACCESSREQUEST_H

@class NSMutableArray, geo_isolater, NSString;
@protocol GEOMapFeatureAccessRequest;

#import <Foundation/Foundation.h>

#import "GEOTileLoader.h"

@interface _GEOMapFeatureAccessRequest : NSObject <GEOMapFeatureAccessRequest>

 {
    NSMutableArray *_clientIdentifiers;
    geo_isolater *_clientIdentifiersIsolater;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOTileLoader *tileLoader; // ivar: _tileLoader


-(id)initWithTileLoader:(id)arg0 ;
-(void)addTileRequest:(id)arg0 ;
-(void)cancel;


@end


#endif