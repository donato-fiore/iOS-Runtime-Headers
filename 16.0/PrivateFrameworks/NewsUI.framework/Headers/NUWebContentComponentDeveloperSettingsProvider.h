// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUWEBCONTENTCOMPONENTDEVELOPERSETTINGSPROVIDER_H
#define NUWEBCONTENTCOMPONENTDEVELOPERSETTINGSPROVIDER_H

@class NSString;
@protocol SXWebContentComponentDeveloperSettingsProvider, FCHeadlineProviding;

#import <Foundation/Foundation.h>


@interface NUWebContentComponentDeveloperSettingsProvider : NSObject <SXWebContentComponentDeveloperSettingsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (readonly) Class superclass;


-(id)developerSettings;
-(id)initWithHeadline:(id)arg0 ;


@end


#endif