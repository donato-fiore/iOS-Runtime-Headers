// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCHIPECOSYSTEMMESSAGE_H
#define HMCHIPECOSYSTEMMESSAGE_H

@class NSArray, NSString, NSExtensionItem, NSUUID;
@protocol HMFObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCHIPEcosystemMessage : NSObject <HMFObject, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSExtensionItem *extensionItemRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *messageType;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif