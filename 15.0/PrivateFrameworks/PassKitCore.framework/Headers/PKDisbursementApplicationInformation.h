// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISBURSEMENTAPPLICATIONINFORMATION_H
#define PKDISBURSEMENTAPPLICATIONINFORMATION_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKDisbursementApplicationInformation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *iconData; // ivar: _iconData
@property (copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (copy, nonatomic) NSString *vendorName; // ivar: _vendorName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVendorName:(id)arg0 itemName:(id)arg1 iconData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif