// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODOTPLACE_H
#define GEODOTPLACE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOMapItemIdentifier.h"
#import "GEOLatLng.h"
#import "GEOStyleAttributes.h"

@interface GEODotPlace : NSObject

@property (readonly, nonatomic) GEOMapItemIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) GEOLatLng *latLng; // ivar: _latLng
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes; // ivar: _styleAttributes


-(id)init;
-(id)initWithDotPlace:(id)arg0 ;


@end


#endif