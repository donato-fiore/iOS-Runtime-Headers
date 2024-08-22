// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTPLANSETUPDETAILS_H
#define CTPLANSETUPDETAILS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPlanSetupDetails : NSObject <NSSecureCoding>



@property (retain) NSString *carrierName; // ivar: _carrierName
@property NSUInteger duration; // ivar: _duration
@property BOOL inBuddy; // ivar: _inBuddy
@property NSUInteger setupResult; // ivar: _setupResult
@property NSUInteger setupType; // ivar: _setupType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInBuddy:(BOOL)arg0 carrierName:(id)arg1 setupType:(NSUInteger)arg2 setupResult:(NSUInteger)arg3 duration:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif