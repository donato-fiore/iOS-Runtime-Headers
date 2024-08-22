// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKTRANSITLINEMARKER_H
#define VKTRANSITLINEMARKER_H

@class GEOMapItemIdentifier, NSString;

#import <Foundation/Foundation.h>


@interface VKTransitLineMarker : NSObject

@property (readonly, nonatomic) NSUInteger featureID;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *labelLocale; // ivar: _labelLocale
@property (readonly, nonatomic) NSString *labelText; // ivar: _labelText
@property (readonly, nonatomic) ? shieldColor; // ivar: _shieldColor
@property (readonly, nonatomic) NSString *shieldLocale; // ivar: _shieldLocale
@property (readonly, nonatomic) NSString *shieldText; // ivar: _shieldText
@property (readonly, nonatomic) NSInteger shieldType; // ivar: _shieldType
@property (readonly, nonatomic) *void transitLinkID; // ivar: _transitLinkID


+(id)markerWithFeature:(*void)arg0 transitLink:(*void)arg1 ;
-(id)description;
-(id)initWithFeature:(*void)arg0 transitLink:(*void)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif