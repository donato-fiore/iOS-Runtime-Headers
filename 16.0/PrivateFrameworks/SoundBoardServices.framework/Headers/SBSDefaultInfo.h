// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSDEFAULTINFO_H
#define SBSDEFAULTINFO_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSDefaultInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger defaultType; // ivar: _defaultType
@property (readonly) NSObject *defaultValue; // ivar: _defaultValue
@property (readonly) BOOL isBool; // ivar: _isBool
@property (readonly) BOOL isDouble; // ivar: _isDouble
@property (readonly) NSNumber *rangeMax; // ivar: _rangeMax
@property (readonly) NSNumber *rangeMin; // ivar: _rangeMin
@property (readonly) BOOL requiresReinit; // ivar: _requiresReinit
@property (readonly) NSString *stringForUserDefault; // ivar: _stringForUserDefault
@property (readonly) NSString *userDescription; // ivar: _userDescription
@property (readonly) NSString *valueType;


+(BOOL)supportsSecureCoding;
+(id)defaultsName:(id)arg0 asBool:(id)arg1 ;
+(id)defaultsName:(id)arg0 asBool:(id)arg1 userInfo:(id)arg2 requiresReinit:(BOOL)arg3 ;
+(id)defaultsName:(id)arg0 asDouble:(id)arg1 ;
+(id)defaultsName:(id)arg0 asDouble:(id)arg1 rangeMin:(id)arg2 rangeMax:(id)arg3 ;
+(id)defaultsName:(id)arg0 asDouble:(id)arg1 rangeMin:(id)arg2 rangeMax:(id)arg3 userInfo:(id)arg4 requiresReinit:(BOOL)arg5 ;
+(id)defaultsName:(id)arg0 asDouble:(id)arg1 userInfo:(id)arg2 requiresReinit:(BOOL)arg3 ;
+(id)defaultsName:(id)arg0 asInt:(id)arg1 ;
+(id)defaultsName:(id)arg0 asInt:(id)arg1 rangeMin:(id)arg2 rangeMax:(id)arg3 ;
+(id)defaultsName:(id)arg0 asInt:(id)arg1 rangeMin:(id)arg2 rangeMax:(id)arg3 userInfo:(id)arg4 requiresReinit:(BOOL)arg5 ;
+(id)defaultsName:(id)arg0 asInt:(id)arg1 userInfo:(id)arg2 requiresReinit:(BOOL)arg3 ;
+(id)defaultsName:(id)arg0 asString:(id)arg1 ;
+(id)defaultsName:(id)arg0 asString:(id)arg1 userInfo:(id)arg2 requiresReinit:(BOOL)arg3 ;
-(id)getHumanReadable:(id)arg0 isDefaultSet:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif