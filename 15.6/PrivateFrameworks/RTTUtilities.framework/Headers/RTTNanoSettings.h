// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTTNANOSETTINGS_H
#define RTTNANOSETTINGS_H

@class NPSDomainAccessor;


#import "RTTSettings.h"

@interface RTTNanoSettings : RTTSettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor; // ivar: _domainAccessor
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor; // ivar: _globalDomainAccessor


+(id)sharedInstance;
-(id)currentLocale;
-(id)init;
-(id)uuidFromContext:(id)arg0 ;
-(id)valueForPreferenceKey:(id)arg0 andContext:(id)arg1 ;
-(void)_setValue:(id)arg0 forPreferenceKey:(id)arg1 ;


@end


#endif