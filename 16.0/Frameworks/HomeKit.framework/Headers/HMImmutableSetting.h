// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIMMUTABLESETTING_H
#define HMIMMUTABLESETTING_H

@class NSArray, NSString;
@protocol HMMessageEncoding, HMFObject;

#import <Foundation/Foundation.h>


@interface HMImmutableSetting : NSObject <HMMessageEncoding, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;
-(id)settingValue;
-(id)settingWithSettingValue:(id)arg0 ;


@end


#endif