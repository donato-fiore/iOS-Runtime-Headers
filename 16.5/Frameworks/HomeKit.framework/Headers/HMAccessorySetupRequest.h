// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETUPREQUEST_H
#define HMACCESSORYSETUPREQUEST_H

@class NSArray, NSString, NSUUID, MTRSetupPayload;
@protocol HMFObject, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HMAccessorySetupPayload.h"

@interface HMAccessorySetupRequest : NSObject <HMFObject, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSUUID *homeUniqueIdentifier; // ivar: _homeUniqueIdentifier
@property (retain) MTRSetupPayload *matterPayload; // ivar: _matterPayload
@property (copy) HMAccessorySetupPayload *payload; // ivar: _payload
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (copy) NSString *suggestedAccessoryName; // ivar: _suggestedAccessoryName
@property (copy) NSUUID *suggestedRoomUniqueIdentifier; // ivar: _suggestedRoomUniqueIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif