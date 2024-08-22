// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSIRIINTELLIGENCESETTINGS_H
#define CNSIRIINTELLIGENCESETTINGS_H

@protocol CNSiriIntelligenceSettingsProtocol;

#import <Foundation/Foundation.h>


@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol>

 {
    uint8_t _shouldShowSiriSuggestions;
    int _notificationToken;
}




-(BOOL)shouldShowSiriSuggestions;
-(id)init;
-(void)dealloc;
-(void)setShouldShowSiriSuggestions:(BOOL)arg0 ;


@end


#endif