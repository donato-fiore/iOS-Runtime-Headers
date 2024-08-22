// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPLAYERACTIVITYSPECIALITEMINTERNAL_H
#define GKPLAYERACTIVITYSPECIALITEMINTERNAL_H

@class NSString, NSDate;


#import "GKInternalRepresentation.h"

@interface GKPlayerActivitySpecialItemInternal : GKInternalRepresentation

@property (nonatomic) NSInteger activityType; // ivar: _activityType
@property (retain, nonatomic) NSString *alternateMessage; // ivar: _alternateMessage
@property (retain, nonatomic) NSString *instrumentationKey; // ivar: _instrumentationKey
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *sfSymbol; // ivar: _sfSymbol
@property (retain, nonatomic) NSDate *timeStamp; // ivar: _timeStamp


+(id)constantToTypeMap;
+(id)secureCodedPropertyKeys;
+(id)typeToConstantMap;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif