// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXOUTPUTREQUEST_H
#define AXOUTPUTREQUEST_H


#import <Foundation/Foundation.h>


@interface AXOutputRequest : NSObject



+(id)addAttributesToAction:(id)arg0 fromDictionary:(id)arg1 ;
+(id)processString:(id)arg0 brailleString:(id)arg1 breakWords:(BOOL)arg2 withLanguage:(id)arg3 atIndex:(NSInteger)arg4 category:(id)arg5 ;
+(id)processStringsAndLanguages:(id)arg0 brailleString:(id)arg1 breakWords:(BOOL)arg2 withLanguage:(id)arg3 atIndex:(NSInteger)arg4 category:(id)arg5 ;


@end


#endif