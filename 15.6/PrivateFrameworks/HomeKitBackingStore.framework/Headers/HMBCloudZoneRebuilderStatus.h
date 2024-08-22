// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBCLOUDZONEREBUILDERSTATUS_H
#define HMBCLOUDZONEREBUILDERSTATUS_H

@class HMFObject, NSString;
@protocol HMBModelObjectCoder, NSCopying;



@interface HMBCloudZoneRebuilderStatus : HMFObject <HMBModelObjectCoder, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger keyStatus; // ivar: _keyStatus
@property (readonly, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSUInteger rebuildState; // ivar: _rebuildState
@property (readonly) Class superclass;


+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)keyStatusString:(NSInteger)arg0 ;
+(id)rebuilderStateString:(NSUInteger)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithState:(NSUInteger)arg0 message:(id)arg1 ;


@end


#endif