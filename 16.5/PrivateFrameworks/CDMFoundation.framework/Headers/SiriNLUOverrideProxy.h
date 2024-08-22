// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUOVERRIDEPROXY_H
#define SIRINLUOVERRIDEPROXY_H


#import <Foundation/Foundation.h>


@interface SiriNLUOverrideProxy : NSObject {
    ? overrideStores;
    ? overrideResults;
    ? swiftifiedInputs;
}




-(BOOL)deleteWithOverrideNamespace:(int)arg0 source:(int)arg1 ;
-(BOOL)insertWithCollection:(id)arg0 ;
-(BOOL)isOverrideStoreValid;
-(id)init;
-(id)initWithUseMemory:(BOOL)arg0 ;
-(id)matchWithInputs:(id)arg0 overrideNamespace:(int)arg1 ;


@end


#endif