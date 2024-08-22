// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSMAPSSETTINGSDETAIL_H
#define PSMAPSSETTINGSDETAIL_H

@class NSString;
@protocol PSSettingsLink;

#import <Foundation/Foundation.h>


@interface PSMapsSettingsDetail : NSObject <PSSettingsLink>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)preferencesURL;


@end


#endif