// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPLAYERACTIVITYSECTIONINTERNAL_H
#define GKPLAYERACTIVITYSECTIONINTERNAL_H

@class NSString, NSArray;


#import "GKInternalRepresentation.h"

@interface GKPlayerActivitySectionInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *instrumentationKey; // ivar: _instrumentationKey
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif