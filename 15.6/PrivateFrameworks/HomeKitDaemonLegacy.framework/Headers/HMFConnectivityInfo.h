// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFCONNECTIVITYINFO_H
#define HMFCONNECTIVITYINFO_H

@class HMFObject, NSString, NSArray;
@protocol NSSecureCoding;


#import "HMFWoBLEInfo.h"
#import "HMFWoWLANInfo.h"

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (retain, nonatomic) HMFWoBLEInfo *woBLEInfo; // ivar: _woBLEInfo
@property (readonly, nonatomic) HMFWoWLANInfo *woWLANInfo;
@property (retain, nonatomic) NSArray *woWLANInfos; // ivar: _woWLANInfos


+(BOOL)supportsSecureCoding;
+(id)connectivityInfoWithAccessoryIdentifier:(id)arg0 wakeConfiguration:(id)arg1 ;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAccessoryIdentifier:(id)arg0 woBLEInfo:(id)arg1 woWLANInfos:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif