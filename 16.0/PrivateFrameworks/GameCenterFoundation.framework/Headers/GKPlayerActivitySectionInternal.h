// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPLAYERACTIVITYSECTIONINTERNAL_H
#define GKPLAYERACTIVITYSECTIONINTERNAL_H

@class NSArray, NSString;


#import "GKInternalRepresentation.h"

@interface GKPlayerActivitySectionInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif