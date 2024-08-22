// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONMESSAGE_H
#define MTSDEVICESETUPEXTENSIONMESSAGE_H

@class NSArray, NSString, NSExtensionItem;
@protocol HMFLogging, HMFObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTSDeviceSetupExtensionMessage : NSObject <HMFLogging, HMFObject, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSExtensionItem *extensionItemRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)messageWithExtensionItemRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif