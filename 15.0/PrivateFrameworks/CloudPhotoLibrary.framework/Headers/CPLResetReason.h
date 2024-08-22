// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLRESETREASON_H
#define CPLRESETREASON_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLResetReason : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) id *asPlist;
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) BOOL tentative; // ivar: _tentative
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 reason:(id)arg1 ;
-(id)initWithPlist:(id)arg0 ;
-(id)reasonDescriptionWithNow:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif