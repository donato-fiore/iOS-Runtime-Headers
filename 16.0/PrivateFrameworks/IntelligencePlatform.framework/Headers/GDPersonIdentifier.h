// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDPERSONIDENTIFIER_H
#define GDPERSONIDENTIFIER_H

@class NSString;
@protocol GDSubEntity, GDTripleIteratorSubEntityRenderer;

#import <Foundation/Foundation.h>

#import "GDSubEntityIdentifier.h"

@interface GDPersonIdentifier : NSObject <GDSubEntity, GDTripleIteratorSubEntityRenderer>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier; // ivar: _subEntityIdentifier
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)initWithRelationshipIdTriplesIterator:(id)arg0 ;


@end


#endif