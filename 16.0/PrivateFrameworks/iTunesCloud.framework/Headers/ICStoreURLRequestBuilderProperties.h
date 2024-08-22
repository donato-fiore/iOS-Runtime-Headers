// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREURLREQUESTBUILDERPROPERTIES_H
#define ICSTOREURLREQUESTBUILDERPROPERTIES_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "ICURLBag.h"
#import "ICDelegateToken.h"

@interface ICStoreURLRequestBuilderProperties : NSObject

@property (copy, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (retain, nonatomic) ICURLBag *URLBag; // ivar: _URLBag
@property (copy, nonatomic) ICDelegateToken *delegateToken; // ivar: _delegateToken
@property (copy, nonatomic) NSNumber *delegatedDSID; // ivar: _delegatedDSID
@property (copy, nonatomic) NSString *delegatedStorefrontIdentifier; // ivar: _delegatedStorefrontIdentifier
@property (retain, nonatomic) ICURLBag *delegatedURLBag; // ivar: _delegatedURLBag
@property (copy, nonatomic) NSString *iCloudPersonID; // ivar: _iCloudPersonID
@property (copy, nonatomic) NSString *storefrontIdentifier; // ivar: _storefrontIdentifier




@end


#endif