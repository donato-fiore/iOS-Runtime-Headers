// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEKITVERSION_H
#define HMDHOMEKITVERSION_H

@class HMFVersion, NSString;
@protocol HMBModelObjectCoder, NSCopying, NSSecureCoding;



@interface HMDHomeKitVersion : HMFVersion <HMBModelObjectCoder, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)version;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif