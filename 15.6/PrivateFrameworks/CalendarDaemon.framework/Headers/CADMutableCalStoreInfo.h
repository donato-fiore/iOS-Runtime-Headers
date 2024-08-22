// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADMUTABLECALSTOREINFO_H
#define CADMUTABLECALSTOREINFO_H

@class NSString;
@protocol CADCalStoreInfo;

#import <Foundation/Foundation.h>


@interface CADMutableCalStoreInfo : NSObject <CADCalStoreInfo>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *delegatedAccountOwnerAccountIdentifier; // ivar: _delegatedAccountOwnerAccountIdentifier
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isLocalStore; // ivar: _isLocalStore
@property (nonatomic) int rowID; // ivar: _rowID
@property (copy, nonatomic) NSString *storeName; // ivar: _storeName




@end


#endif