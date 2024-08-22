// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSIRIENDPOINTPROFILEASSISTANT_H
#define HMSIRIENDPOINTPROFILEASSISTANT_H

@class NSArray, NSString, NSNumber, NSUUID;
@protocol HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMSiriEndpointProfileAssistant : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property NSInteger active; // ivar: _active
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSNumber *identifier; // ivar: _identifier
@property (retain) NSString *name; // ivar: _name
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, nonatomic, getter=isSiriAssistant) BOOL siriAssistant;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 active:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif