// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCLIENTSUBCREDENTIALPARAMS_H
#define SFCLIENTSUBCREDENTIALPARAMS_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFClientSubCredentialParams : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *adamID; // ivar: _adamID
@property (copy, nonatomic) NSArray *adamIDs; // ivar: _adamIDs
@property (copy, nonatomic) NSString *issuerID; // ivar: _issuerID
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif