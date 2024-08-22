// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDPERSONLINK_H
#define GDPERSONLINK_H

@class NSString;
@protocol GDTripleIteratorSubEntityRenderer, GDSubEntity;

#import <Foundation/Foundation.h>

#import "GDEntityIdentifier.h"
#import "GDSubEntityIdentifier.h"

@interface GDPersonLink : NSObject <GDTripleIteratorSubEntityRenderer, GDSubEntity>



@property (readonly, nonatomic) GDEntityIdentifier *linkedPersonEntityIdentifier; // ivar: _linkedPersonEntityIdentifier
@property (readonly, nonatomic) NSString *relationshipLabel; // ivar: _relationshipLabel
@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier; // ivar: _subEntityIdentifier


-(id)initWithRelationshipIdTriplesIterator:(id)arg0 ;


@end


#endif