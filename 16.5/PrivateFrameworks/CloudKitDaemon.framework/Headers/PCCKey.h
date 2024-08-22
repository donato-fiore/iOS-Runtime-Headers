// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCCKEY_H
#define PCCKEY_H


#import <Foundation/Foundation.h>


@interface PCCKey : NSObject

@property *pcc_invocation_key secret; // ivar: _secret


-(id)decrypt:(id)arg0 ;
-(id)encrypt:(id)arg0 ;
-(id)init;
-(void)clear;
-(void)dealloc;


@end


#endif