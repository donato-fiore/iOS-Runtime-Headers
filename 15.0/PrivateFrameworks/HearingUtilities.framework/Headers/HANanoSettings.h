// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HANANOSETTINGS_H
#define HANANOSETTINGS_H

@class NPSDomainAccessor;


#import "AXHASettings.h"

@interface HANanoSettings : AXHASettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor; // ivar: _domainAccessor
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor; // ivar: _globalDomainAccessor


+(id)sharedInstance;
-(BOOL)shouldUseiCloud;
-(id)_valueForPreferenceKey:(id)arg0 ;
-(id)currentLocale;
-(id)init;
-(id)nanoDomainAccessor;
-(void)_setValue:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)dealloc;
-(void)pairedWatchDidChange:(id)arg0 ;


@end


#endif