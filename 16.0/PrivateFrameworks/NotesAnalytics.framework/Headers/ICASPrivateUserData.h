// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASPRIVATEUSERDATA_H
#define ICASPRIVATEUSERDATA_H

@class NSString, NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASPrivateUserData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *privateUserID; // ivar: _privateUserID
@property (readonly, nonatomic) NSString *saltVersion; // ivar: _saltVersion
@property (readonly, nonatomic) NSNumber *userStartMonth; // ivar: _userStartMonth
@property (readonly, nonatomic) NSNumber *userStartYear; // ivar: _userStartYear


+(id)dataName;
-(id)initWithPrivateUserID:(id)arg0 saltVersion:(id)arg1 userStartMonth:(id)arg2 userStartYear:(id)arg3 ;
-(id)toDict;


@end


#endif