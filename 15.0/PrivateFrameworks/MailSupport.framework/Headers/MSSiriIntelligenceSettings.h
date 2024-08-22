// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSIRIINTELLIGENCESETTINGS_H
#define MSSIRIINTELLIGENCESETTINGS_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MSSiriIntelligenceSettings : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canShowSiriSuggestions;
+(id)log;
+(void)_initializeSettings;
+(void)setCanShowSiriSuggestions:(BOOL)arg0 ;


@end


#endif