// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASUSERDATA_H
#define ICASUSERDATA_H

@class NSString, NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASUserData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *saltVersion; // ivar: _saltVersion
@property (readonly, nonatomic) NSString *userID; // ivar: _userID
@property (readonly, nonatomic) NSNumber *userStartMonth; // ivar: _userStartMonth
@property (readonly, nonatomic) NSNumber *userStartYear; // ivar: _userStartYear
@property (readonly, nonatomic) NSString *userStorefrontID; // ivar: _userStorefrontID


+(id)dataName;
-(id)initWithUserID:(id)arg0 userStorefrontID:(id)arg1 saltVersion:(id)arg2 userStartMonth:(id)arg3 userStartYear:(id)arg4 ;
-(id)toDict;


@end


#endif