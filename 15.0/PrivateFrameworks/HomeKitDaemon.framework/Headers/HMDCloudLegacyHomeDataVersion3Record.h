// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDLEGACYHOMEDATAVERSION3RECORD_H
#define HMDCLOUDLEGACYHOMEDATAVERSION3RECORD_H



#import "HMDCloudRecord.h"

@interface HMDCloudLegacyHomeDataVersion3Record : HMDCloudRecord



+(id)legacyModelWithHomeDataV3:(id)arg0 ;
-(BOOL)encodeObjectChange:(id)arg0 ;
-(NSUInteger)objectEncoding;
-(id)data;
-(id)extractObjectChange;
-(id)recordType;
-(void)clearData;
-(void)setData:(id)arg0 ;


@end


#endif