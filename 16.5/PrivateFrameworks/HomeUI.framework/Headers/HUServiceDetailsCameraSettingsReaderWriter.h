// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSERVICEDETAILSCAMERASETTINGSREADERWRITER_H
#define HUSERVICEDETAILSCAMERASETTINGSREADERWRITER_H

@protocol HUServiceDetailsCameraSettingsReaderWriterConfigurator;

#import <Foundation/Foundation.h>


@interface HUServiceDetailsCameraSettingsReaderWriter : NSObject

@property (weak, nonatomic) NSObject<HUServiceDetailsCameraSettingsReaderWriterConfigurator> *configurator; // ivar: _configurator


-(id)_fastUpdateResultsForCharacteristic:(id)arg0 withTitle:(id)arg1 ;
-(id)initWithConfigurator:(id)arg0 ;
-(id)readWithOptions:(id)arg0 ;
-(id)updateUserSettingsWithValue:(BOOL)arg0 ;


@end


#endif