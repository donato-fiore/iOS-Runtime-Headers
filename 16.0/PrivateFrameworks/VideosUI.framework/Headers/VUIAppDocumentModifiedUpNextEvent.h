// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPDOCUMENTMODIFIEDUPNEXTEVENT_H
#define VUIAPPDOCUMENTMODIFIEDUPNEXTEVENT_H

@class NSSet;
@protocol NSCopying;


#import "VUIAppDocumentUpdateEvent.h"

@interface VUIAppDocumentModifiedUpNextEvent : VUIAppDocumentUpdateEvent <NSCopying>



@property (copy, nonatomic) NSSet *addedCanonicalIDs; // ivar: _addedCanonicalIDs
@property (copy, nonatomic) NSSet *removedCanonicalIDs; // ivar: _removedCanonicalIDs


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)coalescedEvent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAction:(NSUInteger)arg0 canonicalID:(id)arg1 ;
-(id)initWithAddedCanonicalIDs:(id)arg0 removedCanonicalIDs:(id)arg1 ;
-(id)initWithDescriptor:(id)arg0 ;


@end


#endif