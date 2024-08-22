// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSOCONTEXT_H
#define ESPRESSOCONTEXT_H


#import <Foundation/Foundation.h>


@interface EspressoContext : NSObject {
    shared_ptr<Espresso::abstract_context> _ctx;
}


@property ? ctx;
@property (readonly) int platform;


-(?)initWithContext;
-(id)initWithDevice:(id)arg0 andWisdomParams:(id)arg1 ;
-(id)initWithNetworkContext:(id)arg0 ;
-(id)initWithPlatform:(int)arg0 ;


@end


#endif