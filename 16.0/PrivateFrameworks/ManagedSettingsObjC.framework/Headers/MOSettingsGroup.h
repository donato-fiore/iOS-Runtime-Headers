// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOSETTINGSGROUP_H
#define MOSETTINGSGROUP_H

@protocol MOSettingsReader, MOSettingsWriter;

#import <Foundation/Foundation.h>


@interface MOSettingsGroup : NSObject

@property (weak, nonatomic) NSObject<MOSettingsReader> *settingsReader; // ivar: _settingsReader
@property (weak, nonatomic) NSObject<MOSettingsWriter> *settingsWriter; // ivar: _settingsWriter


+(id)groupName;
-(id)initWithReader:(id)arg0 writer:(id)arg1 ;
-(id)metadataForSetting:(id)arg0 ;
-(id)valueForSetting:(id)arg0 ;
-(void)setValue:(id)arg0 forSetting:(id)arg1 ;


@end


#endif