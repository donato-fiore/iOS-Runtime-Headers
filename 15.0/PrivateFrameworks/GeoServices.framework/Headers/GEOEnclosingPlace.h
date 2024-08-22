// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOENCLOSINGPLACE_H
#define GEOENCLOSINGPLACE_H

@protocol GEOServerFormattedString;

#import <Foundation/Foundation.h>

#import "GEOPDContainmentPlace.h"
#import "GEOMapItemIdentifier.h"

@interface GEOEnclosingPlace : NSObject {
    GEOPDContainmentPlace *_enclosingPlace;
}


@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *containmentTextTemplate;
@property (readonly, nonatomic) GEOMapItemIdentifier *parentIdentifier;


-(id)initWithContainmentPlace:(id)arg0 ;


@end


#endif