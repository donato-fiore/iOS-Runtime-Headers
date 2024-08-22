// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPLAYERACTIVITYITEMINTERNAL_H
#define GKPLAYERACTIVITYITEMINTERNAL_H

@class NSString, NSDate;


#import "GKInternalRepresentation.h"
#import "GKPlayerActivityRelationships.h"

@interface GKPlayerActivityItemInternal : GKInternalRepresentation

@property (nonatomic) NSInteger activityType; // ivar: _activityType
@property (retain, nonatomic) NSString *instrumentationKey; // ivar: _instrumentationKey
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) GKPlayerActivityRelationships *relationships; // ivar: _relationships
@property (retain, nonatomic) NSDate *timeStamp; // ivar: _timeStamp
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)constantToTypeMap;
+(id)secureCodedPropertyKeys;
+(id)typeToConstantMap;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif