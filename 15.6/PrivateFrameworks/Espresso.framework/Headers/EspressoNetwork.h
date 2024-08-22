// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSONETWORK_H
#define ESPRESSONETWORK_H


#import <Foundation/Foundation.h>

#import "EspressoContext.h"

@interface EspressoNetwork : NSObject

@property (readonly) EspressoContext *ctx;
@property (readonly) NSUInteger layers_size;
@property (readonly) shared_ptr<Espresso::net> net; // ivar: _net


-(id)initWithJSFile:(char *)arg0 binSerializerId:(char *)arg1 context:(id)arg2 computePath:(int)arg3 ;
-(id)initWithJSFile:(char *)arg0 context:(id)arg1 computePath:(int)arg2 ;
-(void)wipe_layers_blobs;


@end


#endif