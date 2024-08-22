// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRMESSAGE_H
#define TRMESSAGE_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRMessage : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif