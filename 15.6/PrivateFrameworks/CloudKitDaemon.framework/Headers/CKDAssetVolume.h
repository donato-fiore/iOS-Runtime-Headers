// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDASSETVOLUME_H
#define CKDASSETVOLUME_H

@class CKObject, NSNumber, NSUUID;



@interface CKDAssetVolume : CKObject

@property (retain, nonatomic) NSNumber *volumeIndex; // ivar: _volumeIndex
@property (retain, nonatomic) NSUUID *volumeUUID; // ivar: _volumeUUID


+(id)CKSQLiteClassName;
-(id)CKPropertiesDescription;
-(id)description;


@end


#endif