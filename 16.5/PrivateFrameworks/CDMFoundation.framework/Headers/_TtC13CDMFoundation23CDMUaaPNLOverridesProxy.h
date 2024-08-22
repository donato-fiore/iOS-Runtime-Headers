// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13CDMFOUNDATION23CDMUAAPNLOVERRIDESPROXY_H
#define _TTC13CDMFOUNDATION23CDMUAAPNLOVERRIDESPROXY_H


#import <Foundation/Foundation.h>


@interface _TtC13CDMFoundation23CDMUaaPNLOverridesProxy : NSObject {
    ? store;
    ? overrideParseProbability;
    ? uaaPOverridesLog;
}




-(BOOL)addWithCollection:(id)arg0 ;
-(BOOL)cleanWithOverrideNamespace:(int)arg0 ;
-(id)init;
-(id)initWithUseMemory:(BOOL)arg0 ;
-(id)matchWithInputs:(id)arg0 overrideNamespace:(int)arg1 ;


@end


#endif