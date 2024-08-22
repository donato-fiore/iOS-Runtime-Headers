// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMXPCMESSAGETRANSPORTCONFIGURATION_H
#define HMXPCMESSAGETRANSPORTCONFIGURATION_H

@class NSArray, NSString;
@protocol HMFObject, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HMXPCMessageTransportConfiguration : NSObject <HMFObject, NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *machServiceName; // ivar: _machServiceName
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property NSUInteger requiredEntitlements; // ivar: _requiredEntitlements
@property BOOL requiresHomeDataAccess; // ivar: _requiresHomeDataAccess
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif