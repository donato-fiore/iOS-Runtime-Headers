// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDASSETBUNDLE_H
#define MANAGEDASSETBUNDLE_H

@class NSManagedObject, NSDate, NSString;



@interface ManagedAssetBundle : NSManagedObject

@property (nonatomic, copy) NSDate *dateRequested;
@property (nonatomic, copy) NSString *downloadingDeviceIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int loadStatus;
@property (nonatomic) int reason;
@property (nonatomic, copy) NSString *requestingDeviceIdentifier;
@property (nonatomic, copy) NSString *workoutIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif