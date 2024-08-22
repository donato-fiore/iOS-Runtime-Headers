// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDRESTOREDEMOTEDAPPLICATIONSREQUESTOPTIONS_H
#define ASDRESTOREDEMOTEDAPPLICATIONSREQUESTOPTIONS_H

@class NSNumber, NSString, NSArray;


#import "ASDRequestOptions.h"

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSNumber *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountID:(id)arg0 appleID:(id)arg1 ;
-(id)initWithBundleIDs:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif