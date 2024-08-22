// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDINSTANTMESSAGEPARSER_H
#define CNVCARDINSTANTMESSAGEPARSER_H


#import <Foundation/Foundation.h>


@interface CNVCardInstantMessageParser : NSObject



+(id)handleWithUsername:(id)arg0 userIdentifier:(id)arg1 service:(id)arg2 bundleIdentifiers:(id)arg3 teamIdentifier:(id)arg4 ;
+(id)serviceForString:(id)arg0 ;
+(id)valueWithService:(id)arg0 existingHandles:(id)arg1 parser:(id)arg2 ;


@end


#endif