// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSACTIVITYINFO_H
#define IDSACTIVITYINFO_H

@class NSArray, NSData, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSActivityInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *URIs; // ivar: _URIs
@property (copy, nonatomic) NSData *appContext; // ivar: _appContext
@property (readonly, nonatomic) NSArray *deviceUniqueIDs; // ivar: _deviceUniqueIDs
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSString *subActivity; // ivar: _subActivity
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


+(BOOL)supportsSecureCoding;
+(id)activityInfoWithSubActivity:(id)arg0 URIs:(id)arg1 ;
+(id)activityInfoWithSubActivity:(id)arg0 devices:(id)arg1 ;
+(id)activityInfoWithSubActivity:(id)arg0 tokens:(id)arg1 ;
-(BOOL)isIdentical:(id)arg0 ;
-(id)_initWithSubActivity:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif