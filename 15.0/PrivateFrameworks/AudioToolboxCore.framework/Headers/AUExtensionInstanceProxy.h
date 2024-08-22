// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUEXTENSIONINSTANCEPROXY_H
#define AUEXTENSIONINSTANCEPROXY_H


#import <Foundation/Foundation.h>


@interface AUExtensionInstanceProxy : NSObject

@property (nonatomic) *void auInstance; // ivar: _auInstance


-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif