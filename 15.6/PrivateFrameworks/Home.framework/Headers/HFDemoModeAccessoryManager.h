// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFDEMOMODEACCESSORYMANAGER_H
#define HFDEMOMODEACCESSORYMANAGER_H

@class NSArray;
@protocol HFCharacteristicValueSource;

#import <Foundation/Foundation.h>


@interface HFDemoModeAccessoryManager : NSObject

@property (retain, nonatomic) NSArray *demoAccessories; // ivar: _demoAccessories
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(BOOL)isInternalAccessoryType:(id)arg0 ;
+(BOOL)isPressDemoModeEnabled;
+(BOOL)isValidExternalType:(id)arg0 ;
+(id)_clipStartDateFromComponents:(id)arg0 today:(id)arg1 ;
+(id)_demoClipWithURL:(id)arg0 duration:(CGFloat)arg1 cameraProfile:(id)arg2 ;
+(id)_eventsFromString:(id)arg0 startDate:(id)arg1 cameraProfile:(id)arg2 ;
+(id)accessoryProfileName:(id)arg0 ;
+(id)accessoryWithContentsOfDictionary:(id)arg0 forHome:(id)arg1 ;
+(id)clipsForCameraProfile:(id)arg0 ;
+(id)configurationProfileFromAccessoryType:(id)arg0 ;
+(id)demoLiveStreamURLForCameraName:(id)arg0 ;
+(id)demoModeDirectoryURL;
+(id)demoSnapshotURLForCameraName:(id)arg0 ;
+(id)demoURLWithCameraName:(id)arg0 fileName:(id)arg1 extension:(id)arg2 ;
+(id)imageIconDescriptorFromDictionary:(id)arg0 ;
+(id)profileURLForDemoModeAccessoryName:(id)arg0 ;
+(id)sharedManager;
-(id)accessories;
-(id)initWithNullValueSource:(id)arg0 ;
-(void)dispatchUpdateMessageForAccessory:(id)arg0 ;
-(void)saveAccessories;


@end


#endif