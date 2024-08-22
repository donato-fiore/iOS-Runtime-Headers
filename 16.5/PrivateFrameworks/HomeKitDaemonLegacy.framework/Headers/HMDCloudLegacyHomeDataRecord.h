// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDLEGACYHOMEDATARECORD_H
#define HMDCLOUDLEGACYHOMEDATARECORD_H

@class NSData;


#import "HMDCloudRecord.h"

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (retain, nonatomic) NSData *dataVersion2;


+(id)legacyModelWithHomeDataV0:(id)arg0 homeDataV2:(id)arg1 ;
-(BOOL)encodeObjectChange:(id)arg0 ;
-(NSUInteger)objectEncoding;
-(id)data;
-(id)extractObjectChange;
-(id)recordType;
-(void)clearData;
-(void)setData:(id)arg0 ;


@end


#endif