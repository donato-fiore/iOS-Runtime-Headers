// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSERVICEPROVIDERPURCHASEACTION_H
#define PKSERVICEPROVIDERPURCHASEACTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKServiceProviderPurchaseAction : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(BOOL)supportsSecureCoding;
+(id)actionWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToServiceProviderPurchaseAction:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif