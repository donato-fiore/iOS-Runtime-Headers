// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSEREDUCATIONSUGGESTIONCONNECTOR_H
#define ATXUSEREDUCATIONSUGGESTIONCONNECTOR_H

@class _PASXPCClientHelper;

#import <Foundation/Foundation.h>


@interface ATXUserEducationSuggestionConnector : NSObject {
    _PASXPCClientHelper *_xpcClientHelper;
}




-(id)initWithOurInterfaceFactory:(*unk)arg0 theirInterfaceFactory:(*unk)arg1 ourServiceName:(id)arg2 theirServiceName:(id)arg3 requestHandler:(id)arg4 ;
-(id)remoteObjectProxy;


@end


#endif