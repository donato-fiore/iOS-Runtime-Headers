// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSSOURCEDESCRIPTOR_H
#define DSSOURCEDESCRIPTOR_H

@class NSString, NSBundle, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface DSSourceDescriptor : NSObject {
    NSString *_sourceName;
    NSBundle *_localizationBundle;
    NSDictionary *_sourceProperties;
}


@property (readonly, copy, nonatomic) NSString *correspondingApplicationIdentifier;
@property (readonly, copy, nonatomic) NSArray *darwinNotifications;
@property (readonly, copy, nonatomic) NSString *dataUsageBundleIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *ignoreErrors;
@property (readonly, copy, nonatomic) NSString *localizedAlertButtonLabel;
@property (readonly, copy, nonatomic) NSString *localizedAppName;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedStopAllAlertDetail;
@property (readonly, copy, nonatomic) NSString *localizedStopAllAlertLabel;
@property (readonly, copy, nonatomic) NSString *localizedStopAllLabel;
@property (readonly, copy, nonatomic) NSString *localizedStopByPersonAlertText;
@property (readonly, nonatomic) NSInteger priority;
@property (readonly, nonatomic) BOOL requiresCellular;
@property (readonly, nonatomic) BOOL requiresWifi;


+(id)sourceDescriptorForSource:(id)arg0 ;
+(id)sourceDescriptorForSource:(id)arg0 localizationBundle:(id)arg1 ;
+(void)initialize;
-(BOOL)shouldIgnoreError:(id)arg0 ;
-(id)localizedAlertDetailForSelectedPeople:(id)arg0 ;
-(id)localizedDetailTextByType:(id)arg0 ;
-(id)localizedPublicSharingDetailTextByType:(id)arg0 ;
-(id)localizedStopByPerson:(id)arg0 ;
-(id)localizedStopByTypeSubtitleForSharingType:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif