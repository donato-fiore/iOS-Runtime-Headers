// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ILCLASSIFICATIONREPORTREQUEST_H
#define ILCLASSIFICATIONREPORTREQUEST_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILClassificationReportRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (copy, nonatomic) NSDictionary *jsonDictionary; // ivar: _jsonDictionary


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionIdentifier:(id)arg0 jsonDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif