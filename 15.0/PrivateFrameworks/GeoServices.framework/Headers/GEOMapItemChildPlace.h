// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPITEMCHILDPLACE_H
#define GEOMAPITEMCHILDPLACE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDChildPlace.h"
#import "GEOMapItemIdentifier.h"

@interface GEOMapItemChildPlace : NSObject {
    GEOPDChildPlace *_childPlace;
    GEOMapItemIdentifier *_identifier;
}


@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) NSString *name;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithChildPlace:(id)arg0 ;


@end


#endif