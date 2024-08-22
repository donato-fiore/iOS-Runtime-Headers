// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDPURCHASEHISTORYQUERY_H
#define ASDPURCHASEHISTORYQUERY_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding>



@property NSInteger accountID; // ivar: _accountID
@property (copy) NSArray *bundleIDs; // ivar: _bundleIDs
@property NSInteger isFirstParty; // ivar: _isFirstParty
@property NSInteger isHidden; // ivar: _isHidden
@property NSInteger isIOSBinaryMacOSCompatible; // ivar: _isIOSBinaryMacOSCompatible
@property NSInteger isPreorder; // ivar: _isPreorder
@property (copy) NSString *searchTerm; // ivar: _searchTerm
@property (copy) NSArray *sortOptions; // ivar: _sortOptions
@property (copy) NSArray *storeIDs; // ivar: _storeIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif