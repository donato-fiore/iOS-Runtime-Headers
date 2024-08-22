// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19APPSTOREKITINTERNAL12LOCALIZATION_H
#define _TTC19APPSTOREKITINTERNAL12LOCALIZATION_H

@class NSString;
@protocol _TtP19AppStoreKitInternal20LocalizationProtocol_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal12Localization : NSObject <_TtP19AppStoreKitInternal20LocalizationProtocol_>

 {
    ? locale;
    ? extendedLocale;
    ? localizedStringTables;
    ? dateFormatters;
    ? dynamicDateFormatters;
    ? $__lazy_storage_$_relativeDateFormatter;
}


@property (nonatomic, readonly) NSString *arcadeWordmarkAssetName;
@property (nonatomic, readonly) NSString *identifier;


-(id)decimal:(id)arg0 ;
-(id)fileSize:(id)arg0 ;
-(id)formatDate:(id)arg0 ;
-(id)formatDateInSentence:(id)arg0 ;
-(id)formatDateWithContext:(id)arg0 ;
-(id)formatDuration:(NSInteger)arg0 ;
-(id)formattedCount:(id)arg0 ;
-(id)init;
-(id)relativeDate:(id)arg0 ;
-(id)string:(id)arg0 ;
-(id)stringWithCount:(id)arg0 ;
-(id)stringWithCounts:(id)arg0 ;
-(id)timeAgo:(id)arg0 ;
-(id)timeAgoWithContext:(id)arg0 ;


@end


#endif