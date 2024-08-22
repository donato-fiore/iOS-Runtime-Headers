// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MDINDEXEXTENSIONMANAGER_H
#define _MDINDEXEXTENSIONMANAGER_H

@class MDExtensionManager;



@interface _MDIndexExtensionManager : MDExtensionManager



+(id)sharedManager;
+(void)setMemoryPressureStatus:(NSUInteger)arg0 ;
-(id)init;
-(void)loadExtensions;


@end


#endif