// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ELSWHITELIST_H
#define ELSWHITELIST_H


#import <Foundation/Foundation.h>


@interface ELSWhitelist : NSObject



+(id)findEntryForBundleIdentifier:(id)arg0 ;
+(id)findEntryForDEDIdentifier:(id)arg0 ;
+(id)findEntryForParameterName:(id)arg0 ;
+(id)whitelist;


@end


#endif