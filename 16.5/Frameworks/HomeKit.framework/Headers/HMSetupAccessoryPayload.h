// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSETUPACCESSORYPAYLOAD_H
#define HMSETUPACCESSORYPAYLOAD_H

@class NSString, NSArray, NSNumber, NSURL;
@protocol HMFObject, NSMutableCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessoryCategory.h"
#import "HMCHIPAccessorySetupPayload.h"

@interface HMSetupAccessoryPayload : NSObject <HMFObject, NSMutableCopying, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy, nonatomic) HMAccessoryCategory *category;
@property (copy, nonatomic) NSNumber *categoryNumber; // ivar: _categoryNumber
@property (retain, nonatomic) HMCHIPAccessorySetupPayload *chipAccessorySetupPayload; // ivar: _chipAccessorySetupPayload
@property (readonly, nonatomic) NSInteger communicationProtocol; // ivar: _communicationProtocol
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPaired) BOOL paired; // ivar: _paired
@property (readonly, copy) NSString *privateDescription;
@property (copy, nonatomic) NSString *productNumber; // ivar: _productNumber
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, nonatomic) BOOL requiresMatterCustomCommissioningFlow;
@property (readonly, copy, nonatomic) NSString *setupCode; // ivar: _setupCode
@property (copy, nonatomic) NSString *setupID; // ivar: _setupID
@property (copy, nonatomic) NSURL *setupPayloadURL; // ivar: _setupPayloadURL
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsBTLE; // ivar: _supportsBTLE
@property (nonatomic) BOOL supportsIP; // ivar: _supportsIP
@property (nonatomic) BOOL supportsWAC; // ivar: _supportsWAC
@property (copy, nonatomic) NSNumber *threadIdentifier; // ivar: _threadIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHAPSetupCode:(id)arg0 ;
-(id)initWithHAPSetupPayloadURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithSetupCode:(id)arg0 ;
-(id)initWithSetupCode:(id)arg0 communicationProtocol:(NSInteger)arg1 ;
-(id)initWithSetupPayloadURL:(id)arg0 error:(*id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif