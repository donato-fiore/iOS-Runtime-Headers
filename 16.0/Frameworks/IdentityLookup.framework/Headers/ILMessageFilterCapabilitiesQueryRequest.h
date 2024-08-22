// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ILMESSAGEFILTERCAPABILITIESQUERYREQUEST_H
#define ILMESSAGEFILTERCAPABILITIESQUERYREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILMessageFilterCapabilitiesQueryRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif