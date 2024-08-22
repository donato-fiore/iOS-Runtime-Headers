// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFCONNECTIVITYINFO_H
#define HMFCONNECTIVITYINFO_H

@class HMFObject, NSString, NSArray;
@protocol HMBModelObjectCoder, NSSecureCoding;


#import "HMFWoBLEInfo.h"
#import "HMFWoWLANInfo.h"

@interface HMFConnectivityInfo : HMFObject <HMBModelObjectCoder, NSSecureCoding>



@property (readonly, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HMFWoBLEInfo *woBLEInfo; // ivar: _woBLEInfo
@property (readonly, nonatomic) HMFWoWLANInfo *woWLANInfo;
@property (retain, nonatomic) NSArray *woWLANInfos; // ivar: _woWLANInfos


+(BOOL)supportsSecureCoding;
+(id)connectivityInfoWithAccessoryIdentifier:(id)arg0 wakeConfiguration:(id)arg1 ;
+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg0 woBLEInfo:(id)arg1 woWLANInfos:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif