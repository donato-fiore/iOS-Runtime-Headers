// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSHAREDTRIPBLOCKEDITEM_H
#define MSSHAREDTRIPBLOCKEDITEM_H

@class TtC8MapsSync14MapsSyncObject, NSString;



@interface MSSharedTripBlockedItem : TtC8MapsSync14MapsSyncObject {
    ? _expiryTime;
    ? _sharedTripIdentifier;
}


@property (nonatomic) NSInteger expiryTime;
@property (nonatomic, copy) NSString *sharedTripIdentifier;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 expiryTime:(NSInteger)arg1 sharedTripIdentifier:(id)arg2 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif