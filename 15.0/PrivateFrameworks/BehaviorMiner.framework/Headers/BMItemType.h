// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMITEMTYPE_H
#define BMITEMTYPE_H

@class _DKEventStream, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BMItemType : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger edge; // ivar: _edge
@property (retain, nonatomic) _DKEventStream *eventStream; // ivar: _eventStream
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) Class valueClass; // ivar: _valueClass
@property (copy, nonatomic) id *valueExtractBlock; // ivar: _valueExtractBlock


+(BOOL)supportsSecureCoding;
+(id)alarmSnoozedAny;
+(id)alarmSnoozedWithID;
+(id)alarmStoppedAny;
+(id)alarmStoppedWithID;
+(id)allItemTypes;
+(id)allItemTypesDictionary;
+(id)allRegisteredItemTypes;
+(id)appActivityType;
+(id)appInFocus;
+(id)appIntentAutomationHash;
+(id)appIntentClass;
+(id)appLaunchedReason;
+(id)appOpened;
+(id)bluetoothConnectedToDevice;
+(id)bluetoothConnectedToDeviceWithAddress;
+(id)bluetoothConnectedToDeviceWithName;
+(id)bundleIdOfHostOpenedShareExtension;
+(id)bundleIdOfShareExtensionOpened;
+(id)connectedToCarPlay;
+(id)connectedToExternalAudioOutput;
+(id)dayOfWeek;
+(id)enterLocation;
+(id)exitLocation;
+(id)firstBacklightAfterWakeup;
+(id)hourOfDay;
+(id)hourOfDaySlot;
+(id)interactionContentURL;
+(id)interactionDirection;
+(id)interactionExtractedTopicFromAttachment;
+(id)interactionItemTypes;
+(id)interactionMechanism;
+(id)interactionPhotoContact;
+(id)interactionPhotoLocation;
+(id)interactionPhotoScene;
+(id)interactionRecipients;
+(id)interactionSender;
+(id)interactionSharingSourceBundleID;
+(id)interactionTargetBundleID;
+(id)interactionTextTopic;
+(id)interactionUTIType;
+(id)isWeekend;
+(id)locationIdentifier;
+(id)mediaGenreStartedPlaying;
+(id)mediaIsPlaying;
+(id)relevanceAppActivityHash;
+(id)relevanceCoarseAppActivityHash;
+(id)relevanceCoarseIntentHash;
+(id)relevanceIntentHash;
+(id)taskSpecificItemWithIdentifier:(id)arg0 valueClass:(Class)arg1 ;
+(id)temporalItemTypes;
+(id)toggledAirplaneMode;
+(id)toggledDoNotDisturb;
+(id)toggledLowPowerMode;
+(id)wifiConnectedToSSID;
+(id)wifiDisconnectedFromSSID;
+(id)wifiIsConnectedToSSID;
+(void)registerItemType:(id)arg0 ;
+(void)unregisterItemType:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extractEventFromDKEvent:(id)arg0 ;
-(id)extractItemFromDKEvent:(id)arg0 ;
-(id)extractValueFromDKEvent:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif