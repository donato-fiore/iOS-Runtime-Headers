// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSINSIGHTEVENT_H
#define CLSINSIGHTEVENT_H

@class NSMutableDictionary;


#import "CLSObject.h"

@interface CLSInsightEvent : CLSObject

@property (retain, nonatomic) NSMutableDictionary *info; // ivar: _info
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)supportedInfoDictionaryClasses;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif