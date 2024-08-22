// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NENEXUSPATHFLOW_H
#define NENEXUSPATHFLOW_H

@class NWPath;


#import "NENexusFlow.h"

@interface NENexusPathFlow : NENexusFlow {
    NWPath *_path;
}




-(id)clientIdentifier;
-(id)endpoint;
-(id)parameters;


@end


#endif