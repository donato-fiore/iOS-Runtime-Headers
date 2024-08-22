// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPDOCUMENTREMOVEPLAYHISTORYEVENT_H
#define VUIAPPDOCUMENTREMOVEPLAYHISTORYEVENT_H

@class NSSet;
@protocol NSCopying;


#import "VUIAppDocumentUpdateEvent.h"

@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent <NSCopying>



@property (copy, nonatomic) NSSet *removedCanonicalIDs; // ivar: _removedCanonicalIDs


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithRemovedCanonicalIDs:(id)arg0 ;


@end


#endif