// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDLOCATIONLINK_H
#define GDLOCATIONLINK_H

@class NSString;
@protocol GDSubEntity, GDTripleIteratorSubEntityRenderer;

#import <Foundation/Foundation.h>

#import "GDEntityIdentifier.h"
#import "GDSubEntityIdentifier.h"

@interface GDLocationLink : NSObject <GDSubEntity, GDTripleIteratorSubEntityRenderer>



@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) GDEntityIdentifier *locationEntityIdentifier; // ivar: _locationEntityIdentifier
@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier; // ivar: _subEntityIdentifier


-(id)initWithRelationshipIdTriplesIterator:(id)arg0 ;


@end


#endif