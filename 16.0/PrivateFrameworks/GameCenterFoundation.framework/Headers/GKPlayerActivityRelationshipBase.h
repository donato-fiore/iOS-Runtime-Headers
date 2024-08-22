// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPLAYERACTIVITYRELATIONSHIPBASE_H
#define GKPLAYERACTIVITYRELATIONSHIPBASE_H

@class NSString;


#import "GKInternalRepresentation.h"

@interface GKPlayerActivityRelationshipBase : GKInternalRepresentation

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *image; // ivar: _image
@property (retain, nonatomic) NSString *name; // ivar: _name


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif