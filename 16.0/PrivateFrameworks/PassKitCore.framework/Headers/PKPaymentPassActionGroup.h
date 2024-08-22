// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPASSACTIONGROUP_H
#define PKPAYMENTPASSACTIONGROUP_H

@class NSString, NSArray, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentPassActionGroup : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *actionGroupDescription; // ivar: _actionGroupDescription
@property (copy, nonatomic) NSArray *actionIdentifiers; // ivar: _actionIdentifiers
@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSDictionary *appletData; // ivar: _appletData
@property (nonatomic) BOOL hasRemoteContent; // ivar: _hasRemoteContent
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL remoteContentRequiresAppletData; // ivar: _remoteContentRequiresAppletData
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif