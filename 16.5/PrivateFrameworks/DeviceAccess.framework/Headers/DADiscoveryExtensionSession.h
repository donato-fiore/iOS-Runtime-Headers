// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADISCOVERYEXTENSIONSESSION_H
#define DADISCOVERYEXTENSIONSESSION_H


#import <Foundation/Foundation.h>


@interface DADiscoveryExtensionSession : NSObject

@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler


-(void)invalidate;
-(void)reportEvent:(id)arg0 ;


@end


#endif