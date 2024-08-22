// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNCUIKICONPROVIDER_H
#define CALNCUIKICONPROVIDER_H

@class NSString;
@protocol CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider;

#import <Foundation/Foundation.h>


@interface CALNCUIKIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_parseIconIdentifier:(id)arg0 intoDateComponents:(*id)arg1 calendar:(*id)arg2 type:(*NSInteger)arg3 ;
+(id)_identifierEncodingAllowedCharacters;
+(id)sharedInstance;
-(id)identifierForIconWithDate:(id)arg0 inCalendar:(id)arg1 ;
-(id)pngDataForIconWithIdentifier:(id)arg0 ;


@end


#endif