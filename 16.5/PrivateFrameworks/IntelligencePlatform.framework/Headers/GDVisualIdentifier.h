// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDVISUALIDENTIFIER_H
#define GDVISUALIDENTIFIER_H

@class NSString;
@protocol GDTripleIteratorSubEntityRenderer, GDSubEntity;

#import <Foundation/Foundation.h>

#import "GDSubEntityIdentifier.h"

@interface GDVisualIdentifier : NSObject <GDTripleIteratorSubEntityRenderer, GDSubEntity>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier; // ivar: _subEntityIdentifier
@property (readonly, nonatomic) NSString *visualIdentifier; // ivar: _visualIdentifier


-(id)description;
-(id)initWithRelationshipIdTriplesIterator:(id)arg0 ;


@end


#endif