// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNNULLICONPROVIDER_H
#define CALNNULLICONPROVIDER_H

@class NSString;
@protocol CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider;

#import <Foundation/Foundation.h>


@interface CALNNullIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)identifierForIconWithDate:(id)arg0 inCalendar:(id)arg1 ;
-(id)pngDataForIconWithIdentifier:(id)arg0 ;


@end


#endif