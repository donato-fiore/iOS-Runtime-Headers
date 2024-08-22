// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NENEXUSPATHFLOW_H
#define NENEXUSPATHFLOW_H

@class NWPath;


#import "NENexusFlow.h"

@interface NENexusPathFlow : NENexusFlow

@property (retain) NWPath *path; // ivar: _path


-(id)clientIdentifier;
-(id)endpoint;
-(id)initWithPath:(id)arg0 ;
-(id)parameters;


@end


#endif