// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDASSETREQUESTKEYMETADATA_H
#define MANAGEDASSETREQUESTKEYMETADATA_H

@class NSManagedObject, NSString, NSDate;



@interface ManagedAssetRequestKeyMetadata : NSManagedObject

@property (nonatomic) BOOL canFreeDeviceSlot;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *masterPlaylist;
@property (nonatomic, copy) NSDate *renewDate;
@property (nonatomic, copy) NSString *slotIdentifier;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic) int version;
@property (nonatomic, copy) NSString *workoutIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif