// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMALARMLOCATIONTRIGGER_H
#define REMALARMLOCATIONTRIGGER_H

@protocol NSSecureCoding;


#import "REMAlarmTrigger.h"
#import "REMStructuredLocation.h"

@interface REMAlarmLocationTrigger : REMAlarmTrigger <NSSecureCoding>



@property (nonatomic) NSInteger proximity; // ivar: _proximity
@property (copy, nonatomic) REMStructuredLocation *structuredLocation; // ivar: _structuredLocation


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isContentEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTemporal;
-(NSUInteger)hash;
-(id)_deepCopy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 structuredLocation:(id)arg1 proximity:(NSInteger)arg2 ;
-(id)initWithStructuredLocation:(id)arg0 proximity:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif