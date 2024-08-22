// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCUSTOMWORLDCITYABBREVIATIONSSTORE_H
#define NTKCUSTOMWORLDCITYABBREVIATIONSSTORE_H

@class NPSManager;

#import <Foundation/Foundation.h>


@interface NTKCustomWorldCityAbbreviationsStore : NSObject {
    NPSManager *_npsManager;
}




+(id)sharedInstance;
-(id)_getCustomAbbreviationsFromPrefs;
-(id)customAbbreviations;
-(id)init;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
-(void)dealloc;
-(void)setCustomAbbreviation:(id)arg0 forCityIdentifier:(id)arg1 ;


@end


#endif