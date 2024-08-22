// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHTTPDEVICE_H
#define HMDHTTPDEVICE_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging;



@interface HMDHTTPDevice : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)logCategory;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)logIdentifier;
-(id)shortDescription;


@end


#endif