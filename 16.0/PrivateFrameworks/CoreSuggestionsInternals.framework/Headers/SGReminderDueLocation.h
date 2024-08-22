// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGREMINDERDUELOCATION_H
#define SGREMINDERDUELOCATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGReminderDueLocation : NSObject

@property (readonly, nonatomic) unsigned char locationType; // ivar: _locationType
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned char trigger; // ivar: _trigger


+(id)mergeDueLocations:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReminderDueLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLocationType:(unsigned char)arg0 trigger:(unsigned char)arg1 name:(id)arg2 ;


@end


#endif