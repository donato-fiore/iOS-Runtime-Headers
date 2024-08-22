// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCCONTROLLERMETADEFAULTSOBSERVER_H
#define GCCONTROLLERMETADEFAULTSOBSERVER_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface GCControllerMetaDefaultsObserver : NSObject

@property (readonly, nonatomic) NSUserDefaults *metaDefaults; // ivar: _metaDefaults


-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif