// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKPRIVATEEMAIL_H
#define AKPRIVATEEMAIL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKPrivateEmail : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSString *privateEmailAddress; // ivar: _privateEmailAddress


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAddress:(id)arg0 forKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif