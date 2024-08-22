// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _IDSSESSIONSTORE_H
#define _IDSSESSIONSTORE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface _IDSSessionStore : NSObject

@property (retain, nonatomic) NSMapTable *sessionBySessionID; // ivar: _sessionBySessionID


+(id)sharedInstance;
-(id)init;
-(id)sessionForAccount:(id)arg0 fromID:(id)arg1 identifier:(id)arg2 transportType:(id)arg3 ;


@end


#endif