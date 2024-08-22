// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REACCESSORYMATCHUP_H
#define REACCESSORYMATCHUP_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REImage.h"

@interface REAccessoryMatchup : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *awayTeamDetail; // ivar: _awayTeamDetail
@property (readonly, nonatomic) REImage *awayTeamImage; // ivar: _awayTeamImage
@property (readonly, nonatomic) NSString *awayTeamName; // ivar: _awayTeamName
@property (readonly, nonatomic) NSString *homeTeamDetail; // ivar: _homeTeamDetail
@property (readonly, nonatomic) REImage *homeTeamImage; // ivar: _homeTeamImage
@property (readonly, nonatomic) NSString *homeTeamName; // ivar: _homeTeamName
@property (readonly, nonatomic) NSDate *matchupDateFetched; // ivar: _matchupDateFetched
@property (readonly, nonatomic) NSString *matchupProgress; // ivar: _matchupProgress
@property (readonly, nonatomic) NSDate *matchupStartDate; // ivar: _matchupStartDate
@property (readonly, nonatomic) NSUInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeTeamImage:(id)arg0 homeTeamName:(id)arg1 homeTeamDetail:(id)arg2 awayTeamImage:(id)arg3 awayTeamName:(id)arg4 awayTeamDetail:(id)arg5 progress:(id)arg6 startDate:(id)arg7 status:(NSUInteger)arg8 dateFetched:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif