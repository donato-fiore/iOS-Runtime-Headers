// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLINTERSILOINTERFACE_H
#define CLINTERSILOINTERFACE_H


#import <Foundation/Foundation.h>


@interface CLIntersiloInterface : NSObject



+(id)sharedInterface;
-(id)getInfoForSelector:(SEL)arg0 ;
-(void)extendSelectorInfoWithProtocol:(id)arg0 bases:(id)arg1 ;


@end


#endif