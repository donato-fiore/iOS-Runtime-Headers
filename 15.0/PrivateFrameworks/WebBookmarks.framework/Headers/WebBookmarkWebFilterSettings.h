// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBBOOKMARKWEBFILTERSETTINGS_H
#define WEBBOOKMARKWEBFILTERSETTINGS_H

@class WFUserSettings;

#import <Foundation/Foundation.h>


@interface WebBookmarkWebFilterSettings : NSObject {
    WFUserSettings *_userSettings;
}


@property (readonly, nonatomic) WFUserSettings *userSettings;
@property (readonly, nonatomic, getter=isWebFilterEnabled) BOOL webFilterEnabled;
@property (readonly, nonatomic, getter=isWebFilterWhiteListOnlyModeEnabled) BOOL webFilterWhiteListOnlyModeEnabled;


+(id)sharedWebFilterSettings;
-(id)init;
-(void)dealloc;
-(void)reloadSettings;


@end


#endif