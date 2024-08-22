// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDVPPREQUEST_H
#define ASDVPPREQUEST_H

@class NSNumber, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDVPPRequest : NSObject <NSSecureCoding>



@property (copy) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property NSInteger archiveType; // ivar: _archiveType
@property (copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (copy) NSNumber *itemIdentifier; // ivar: _itemIdentifier
@property (retain) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) NSInteger requestType; // ivar: _requestType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif