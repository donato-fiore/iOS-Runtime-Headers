// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMCLIENTSETUP_H
#define CDMCLIENTSETUP_H

@class NSString, NSLocale;

#import <Foundation/Foundation.h>


@interface CDMClientSetup : NSObject

@property (retain) NSString *activeServiceGraph; // ivar: _activeServiceGraph
@property (retain) NSLocale *localeIdentifier; // ivar: _localeIdentifier
@property (retain) NSString *sandboxId; // ivar: _sandboxId


-(id)initWithLocaleIdentifier:(id)arg0 sandboxId:(id)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg0 sandboxId:(id)arg1 activeServiceGraph:(id)arg2 ;


@end


#endif