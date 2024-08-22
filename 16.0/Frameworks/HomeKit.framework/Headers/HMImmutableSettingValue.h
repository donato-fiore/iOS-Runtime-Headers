// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIMMUTABLESETTINGVALUE_H
#define HMIMMUTABLESETTINGVALUE_H

@class NSArray, NSString;
@protocol HMMessageEncoding, HMFObject;

#import <Foundation/Foundation.h>


@interface HMImmutableSettingValue : NSObject <HMMessageEncoding, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initSettingValue;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;


@end


#endif