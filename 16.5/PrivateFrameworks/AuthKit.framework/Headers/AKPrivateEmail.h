// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKPRIVATEEMAIL_H
#define AKPRIVATEEMAIL_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKPrivateEmail : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *clientAppBundleId; // ivar: _clientAppBundleId
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSString *privateEmailAddress; // ivar: _privateEmailAddress


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAddress:(id)arg0 forKey:(id)arg1 ;
-(id)initWithAddress:(id)arg0 forKey:(id)arg1 withBundleId:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif