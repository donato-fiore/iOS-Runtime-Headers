// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIPCLIENTDATADICTIONARY_H
#define SIPCLIENTDATADICTIONARY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SIPClientDataDictionary : NSObject {
    NSMutableDictionary *allCalls;
}




-(id)copyObjectForKey:(id)arg0 p2pID:(unsigned int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg0 forKey:(id)arg1 forP2PID:(unsigned int)arg2 ;


@end


#endif