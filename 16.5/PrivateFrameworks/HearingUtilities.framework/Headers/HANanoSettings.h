// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HANANOSETTINGS_H
#define HANANOSETTINGS_H

@class NPSDomainAccessor;


#import "HUHearingAidSettings.h"

@interface HANanoSettings : HUHearingAidSettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor; // ivar: _domainAccessor
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor; // ivar: _globalDomainAccessor


+(id)sharedInstance;
-(BOOL)shouldUseiCloud;
-(id)_valueForPreferenceKey:(id)arg0 ;
-(id)currentLocale;
-(id)init;
-(id)nanoDomainAccessor;
-(void)dealloc;
-(void)pairedWatchDidChange:(id)arg0 ;
-(void)setValue:(id)arg0 forPreferenceKey:(id)arg1 ;


@end


#endif