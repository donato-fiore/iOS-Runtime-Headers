// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKSCENE_H
#define MKFCKSCENE_H

@class NSSet, NSArray, NSDictionary, NSUUID, NSString, NSDate;


#import "MKFCKHomeObject.h"
#import "MKFCKHome.h"

@interface MKFCKScene : MKFCKHomeObject

@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSDictionary *applicationData;
@property (retain, nonatomic) NSSet *automations;
@property (copy, nonatomic) NSUUID *flags;
@property (retain, nonatomic) MKFCKHome *home;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(id)decodeActionAppleMediaAccessoryPower:(id)arg0 localModel:(id)arg1 context:(id)arg2 ;
-(id)decodeActionCharacteristic:(id)arg0 localModel:(id)arg1 context:(id)arg2 ;
-(id)decodeActionMediaPlayback:(id)arg0 localModel:(id)arg1 context:(id)arg2 ;
-(id)decodeActionNaturalLight:(id)arg0 localModel:(id)arg1 context:(id)arg2 ;
-(id)decodeActionShortcut:(id)arg0 localModel:(id)arg1 context:(id)arg2 ;
-(id)encodeActionAppleMediaAccessoryPower:(id)arg0 accessories:(id)arg1 context:(id)arg2 ;
-(id)encodeActionCharacteristic:(id)arg0 accessories:(id)arg1 context:(id)arg2 ;
-(id)encodeActionMediaPlayback:(id)arg0 accessories:(id)arg1 context:(id)arg2 ;
-(id)encodeActionNaturalLight:(id)arg0 accessories:(id)arg1 shouldRemoveAction:(*BOOL)arg2 context:(id)arg3 ;
-(id)encodeActionShortcut:(id)arg0 context:(id)arg1 ;


@end


#endif