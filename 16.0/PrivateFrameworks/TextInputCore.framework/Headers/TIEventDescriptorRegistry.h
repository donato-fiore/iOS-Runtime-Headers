// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIEVENTDESCRIPTORREGISTRY_H
#define TIEVENTDESCRIPTORREGISTRY_H

@class NSMutableDictionary, NSLock, NSDictionary;

#import <Foundation/Foundation.h>


@interface TIEventDescriptorRegistry : NSObject {
    NSMutableDictionary *_eventDescriptors;
    NSMutableDictionary *_eventSpecs;
    NSLock *_lock;
}


@property (retain, nonatomic) NSDictionary *config; // ivar: _config
@property (readonly, nonatomic) NSDictionary *eventDescriptors;
@property (readonly, nonatomic) NSDictionary *eventSpecs;
@property (nonatomic) BOOL loaded; // ivar: _loaded


+(id)registry;
+(id)registryWithConfig:(id)arg0 ;
+(id)registryWithDescriptors:(id)arg0 andSpecs:(id)arg1 ;
-(id)allEventDescriptors;
-(id)contextFromError:(id)arg0 ;
-(id)eventDescriptorWithName:(id)arg0 ;
-(id)eventSpecWithName:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithDescriptors:(id)arg0 andSpecs:(id)arg1 ;
-(id)valueFromError:(id)arg0 forKey:(id)arg1 ;
-(void)_loadEventDescriptors;
-(void)loadEventDescriptorsIfNecessary;


@end


#endif