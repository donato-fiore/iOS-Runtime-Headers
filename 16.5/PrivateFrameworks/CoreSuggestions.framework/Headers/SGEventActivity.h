// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGEVENTACTIVITY_H
#define SGEVENTACTIVITY_H

@class NSString, NSUserActivity;

#import <Foundation/Foundation.h>


@interface SGEventActivity : NSObject

@property (readonly, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (readonly, nonatomic) unsigned char type; // ivar: _type
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (readonly, nonatomic) CGFloat validEndDate; // ivar: _validEndDate
@property (readonly, nonatomic) CGFloat validStartDate; // ivar: _validStartDate


+(id)describeType:(unsigned char)arg0 ;
+(unsigned char)typeForString:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTeamIdentifier:(id)arg0 type:(unsigned char)arg1 userActivity:(id)arg2 validStartDate:(CGFloat)arg3 validEndDate:(CGFloat)arg4 ;
-(id)jsonObject;


@end


#endif