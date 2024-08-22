// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICBOOK_H
#define ICBOOK_H

@class NSURL, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICBook : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSString *author; // ivar: _author
@property (copy, nonatomic) NSDate *datePurchased; // ivar: _datePurchased
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (nonatomic) NSUInteger purchaseHistoryID; // ivar: _purchaseHistoryID
@property (copy, nonatomic) NSString *redownloadParameters; // ivar: _redownloadParameters
@property (nonatomic) NSUInteger storeID; // ivar: _storeID
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic, getter=isVPPLicensed) BOOL vppLicensed; // ivar: _vppLicensed
@property (copy, nonatomic) NSString *vppOrganizationDisplayName; // ivar: _vppOrganizationDisplayName
@property (copy, nonatomic) NSString *vppOrganizationID; // ivar: _vppOrganizationID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif