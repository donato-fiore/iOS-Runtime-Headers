// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEL2TPUSERPREFERENCES_H
#define NEL2TPUSERPREFERENCES_H

@class NSString;
@protocol NEConfigurationValidating;

#import <Foundation/Foundation.h>

#import "NEVPNProtocolL2TP.h"

@interface NEL2TPUserPreferences : NSObject <NEConfigurationValidating>

 {
    *__SCUserPreferencesRef _userPrefs;
}


@property (getter=isCurrent) BOOL current; // ivar: _current
@property (readonly, getter=isForced) BOOL forced; // ivar: _forced
@property (readonly) NSString *identifier; // ivar: _identifier
@property (retain) NSString *name; // ivar: _name
@property (copy) NEVPNProtocolL2TP *settings; // ivar: _settings


-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;


@end


#endif