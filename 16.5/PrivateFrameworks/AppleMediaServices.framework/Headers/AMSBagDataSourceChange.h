// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGDATASOURCECHANGE_H
#define AMSBAGDATASOURCECHANGE_H

@class NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface AMSBagDataSourceChange : NSObject

@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSString *loadedBagIdentifier; // ivar: _loadedBagIdentifier
@property (readonly, nonatomic) NSString *loadedBagPartialIdentifier; // ivar: _loadedBagPartialIdentifier
@property (readonly, nonatomic) NSDictionary *originalData; // ivar: _originalData
@property (readonly, nonatomic) NSDate *originalExpirationDate; // ivar: _originalExpirationDate
@property (readonly, nonatomic) NSString *profile; // ivar: _profile
@property (readonly, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (readonly, nonatomic) NSDictionary *updatedData; // ivar: _updatedData


-(id)initWithProfile:(id)arg0 profileVersion:(id)arg1 originalData:(id)arg2 originalExpirationDate:(id)arg3 updatedData:(id)arg4 loadedBagIdentifier:(id)arg5 loadedBagPartialIdentifier:(id)arg6 accountIdentifier:(id)arg7 ;


@end


#endif