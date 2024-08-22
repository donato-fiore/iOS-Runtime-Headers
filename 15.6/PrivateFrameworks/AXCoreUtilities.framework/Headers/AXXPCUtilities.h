// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXXPCUTILITIES_H
#define AXXPCUTILITIES_H


#import <Foundation/Foundation.h>


@interface AXXPCUtilities : NSObject



+(id)copyXPCMessageFromDictionary:(id)arg0 inReplyToXPCMessage:(id)arg1 error:(*id)arg2 ;
+(id)dictionaryFromXPCMessage:(id)arg0 error:(*id)arg1 ;


@end


#endif