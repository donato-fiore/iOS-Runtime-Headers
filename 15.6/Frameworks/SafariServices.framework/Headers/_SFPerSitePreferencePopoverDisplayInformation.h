// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPERSITEPREFERENCEPOPOVERDISPLAYINFORMATION_H
#define _SFPERSITEPREFERENCEPOPOVERDISPLAYINFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _SFPerSitePreferencePopoverDisplayInformation : NSObject

@property (readonly, nonatomic) NSUInteger displayOption; // ivar: _displayOption
@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName


+(id)popoverDisplayInformationForPerSitePreference:(id)arg0 ;
+(void)_buildMapIfNeeded;
-(id)_initWithDisplayOption:(NSUInteger)arg0 localizedDisplayName:(id)arg1 ;


@end


#endif