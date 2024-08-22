// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMHAPMETADATA_H
#define HMHAPMETADATA_H

@class HMFUnfairLock, NSString, NSDictionary, NSNumber;
@protocol HMProtoBufMerge;

#import <Foundation/Foundation.h>


@interface HMHAPMetadata : NSObject <HMProtoBufMerge>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *hapCategoryMap; // ivar: _hapCategoryMap
@property (retain, nonatomic) NSDictionary *hapChrMap; // ivar: _hapChrMap
@property (retain, nonatomic) NSDictionary *hapSvcMap; // ivar: _hapSvcMap
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSNumber *version; // ivar: _version


+(id)getSharedInstance;
-(BOOL)applyProtoBufData:(id)arg0 callbackOperations:(id)arg1 ;
-(BOOL)shouldNotCacheCharacteristicOfType:(id)arg0 ;
-(id)categoryForCategoryType:(id)arg0 ;
-(id)categoryForNumber:(id)arg0 ;
-(id)characteristicTypeDescription:(id)arg0 ;
-(id)init;
-(id)serviceTypeDescription:(id)arg0 ;


@end


#endif