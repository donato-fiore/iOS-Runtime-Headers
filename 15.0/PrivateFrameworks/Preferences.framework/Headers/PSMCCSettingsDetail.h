// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSMCCSETTINGSDETAIL_H
#define PSMCCSETTINGSDETAIL_H

@class NSString;
@protocol PSSettingsLink;

#import <Foundation/Foundation.h>


@interface PSMCCSettingsDetail : NSObject <PSSettingsLink>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)preferencesURL;


@end


#endif