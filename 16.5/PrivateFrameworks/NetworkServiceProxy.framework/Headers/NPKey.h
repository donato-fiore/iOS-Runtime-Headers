// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKEY_H
#define NPKEY_H

@class NSData, NSUUID;

#import <Foundation/Foundation.h>

#import "NSPNetworkAgent.h"

@interface NPKey : NSObject

@property (readonly) NSPNetworkAgent *agentForKey;
@property int error; // ivar: _error
@property unsigned int flags; // ivar: _flags
@property (retain, nonatomic) NSData *info; // ivar: _info
@property unsigned int session_counter; // ivar: _session_counter
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)data;
-(id)initWithData:(id)arg0 ;


@end


#endif