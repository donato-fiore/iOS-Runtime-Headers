// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDMANAGEDAPPLICATIONREQUESTOPTIONS_H
#define ASDMANAGEDAPPLICATIONREQUESTOPTIONS_H

@class NSNumber, NSString;


#import "ASDRequestOptions.h"

@interface ASDManagedApplicationRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, nonatomic) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (readonly, nonatomic) NSNumber *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (readonly, nonatomic) BOOL skipDownloads; // ivar: _skipDownloads


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemIdentifer:(id)arg0 externalVersionIdentifier:(id)arg1 bundleIdentifier:(id)arg2 bundleVersion:(id)arg3 skipDownloads:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif