// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPITEMCONTAINEDPLACELINKEDPLACE_H
#define GEOMAPITEMCONTAINEDPLACELINKEDPLACE_H



#import "GEOBaseMapItem.h"
#import "GEOPDLinkedPlace.h"
#import "GEOMapItemIdentifier.h"
#import "GEOFeatureStyleAttributes.h"

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}




-(BOOL)_hasMUID;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_hasResultProviderID;
-(BOOL)_isInLinkedPlaceRelationship;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)isValid;
-(NSUInteger)_muid;
-(id)_identifier;
-(id)_styleAttributes;
-(id)description;
-(id)initWithLinkedPlace:(id)arg0 ;
-(id)name;
-(int)_resultProviderID;
-(int)referenceFrame;
-(struct ? )coordinate;


@end


#endif