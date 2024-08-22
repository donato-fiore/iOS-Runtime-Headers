// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ILMESSAGEFILTERREPORTREQUEST_H
#define ILMESSAGEFILTERREPORTREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILMessageFilterReportRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (copy, nonatomic) NSString *messageBody; // ivar: _messageBody
@property (copy, nonatomic) NSString *sender; // ivar: _sender
@property (nonatomic) NSInteger suggestedAction; // ivar: _suggestedAction


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