// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSENGAGEMENTRESULT_H
#define AMSENGAGEMENTRESULT_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSEngagementResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *ams_buyParams;
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)_updatedBodyFromValue:(id)arg0 request:(id)arg1 ;
-(id)ams_requestActionFromRequest:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif