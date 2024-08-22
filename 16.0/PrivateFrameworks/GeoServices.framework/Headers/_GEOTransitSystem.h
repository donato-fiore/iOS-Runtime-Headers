// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOTRANSITSYSTEM_H
#define _GEOTRANSITSYSTEM_H

@class NSString;
@protocol GEOTransitSystem, NSSecureCoding, GEOTransitArtworkDataSource;

#import <Foundation/Foundation.h>

#import "GEOPBTransitSystem.h"
#import "GEOStyleAttributes.h"

@interface _GEOTransitSystem : NSObject <GEOTransitSystem, NSSecureCoding>

 {
    GEOPBTransitSystem *_system;
}


@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSystem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif