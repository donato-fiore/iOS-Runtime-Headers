// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKOPERATIONGROUP_H
#define CKOPERATIONGROUP_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKOperationGroupSystemImposedInfo.h"
#import "CKOperationConfiguration.h"

@interface CKOperationGroup : NSObject <NSSecureCoding>

 {
    CKOperationGroupSystemImposedInfo *_systemImposedInfo_locked;
}


@property (readonly, nonatomic) NSInteger approximateReceiveBytes;
@property (readonly, nonatomic) NSInteger approximateSendBytes;
@property (copy) NSString *authPromptReason; // ivar: _authPromptReason
@property (copy) CKOperationConfiguration *defaultConfiguration; // ivar: _defaultConfiguration
@property NSInteger expectedReceiveSize; // ivar: _expectedReceiveSize
@property NSInteger expectedSendSize; // ivar: _expectedSendSize
@property (copy) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *operationGroupID; // ivar: _operationGroupID
@property NSUInteger quantity;
@property (copy) NSNumber *quantityNumber; // ivar: _quantityNumber
@property (copy, nonatomic) CKOperationGroupSystemImposedInfo *systemImposedInfo;


+(BOOL)supportsSecureCoding;
-(NSUInteger)resolvedNetworkServiceTypeForConfig:(id)arg0 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif