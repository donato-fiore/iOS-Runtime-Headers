// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEACCOUNTCONTEXT_H
#define HMDAPPLEACCOUNTCONTEXT_H

@class HMFObject, NSString, NSArray;
@protocol HMFObject;



@interface HMDAppleAccountContext : HMFObject <HMFObject>



@property (readonly, copy) NSString *alternateDSID; // ivar: _alternateDSID
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *username; // ivar: _username


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithAccount:(id)arg0 ;


@end


#endif