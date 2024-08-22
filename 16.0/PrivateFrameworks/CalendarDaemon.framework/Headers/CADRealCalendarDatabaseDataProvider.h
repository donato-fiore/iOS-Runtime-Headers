// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADREALCALENDARDATABASEDATAPROVIDER_H
#define CADREALCALENDARDATABASEDATAPROVIDER_H

@protocol CADCalendarDatabaseDataProvider;

#import <Foundation/Foundation.h>


@interface CADRealCalendarDatabaseDataProvider : NSObject <CADCalendarDatabaseDataProvider>





+(id)realDataProvider;
-(?)accountIDForStoreinDatabase;
-(?)databaseID;
-(?)gatherCalendarRowIDs:(?)arg0 inStoreinDatabase;
-(?)isLocalStoreinDatabase;
-(?)isStoreDelegateinDatabase;
-(?)naturalLanguageSuggestionsCalendarRowIDInDatabase;
-(?)storeIDForStoreinDatabase;
-(?)storesInDatabase;
-(?)suggestionsCalendarRowIDInDatabase;


@end


#endif