// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef C2SESSIONGROUP_H
#define C2SESSIONGROUP_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "C2Session.h"

@interface C2SessionGroup : NSObject

@property (retain, nonatomic) NSString *configurationName; // ivar: _configurationName
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) C2Session *pinnedSession; // ivar: _pinnedSession
@property (retain, nonatomic) C2Session *pinnedSessionAllowingExpiredDNS; // ivar: _pinnedSessionAllowingExpiredDNS
@property (readonly, nonatomic) NSArray *sessions;
@property (retain, nonatomic) C2Session *unpinnedSession; // ivar: _unpinnedSession


-(BOOL)removeSession:(id)arg0 ;
-(id)initWithConfigurationName:(id)arg0 ;
-(id)sessionForOptions:(id)arg0 ;
-(void)setSession:(id)arg0 forOptions:(id)arg1 ;


@end


#endif