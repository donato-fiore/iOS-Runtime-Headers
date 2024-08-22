// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCLOUDRECORDCLOUDSTOREZONESHARELOCK_H
#define PKCLOUDRECORDCLOUDSTOREZONESHARELOCK_H



#import "PKCloudRecordObject.h"
#import "PKCloudStoreZoneShareLock.h"

@interface PKCloudRecordCloudStoreZoneShareLock : PKCloudRecordObject

@property (retain, nonatomic) PKCloudStoreZoneShareLock *cloudStoreZoneShareLock; // ivar: _cloudStoreZoneShareLock


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg0 ;
-(id)description;
-(id)descriptionWithItem:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)item;
-(void)applyCloudRecordObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif