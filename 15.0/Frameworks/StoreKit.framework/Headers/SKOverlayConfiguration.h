// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKOVERLAYCONFIGURATION_H
#define SKOVERLAYCONFIGURATION_H

@protocol ASOOverlayConfiguration;

#import <Foundation/Foundation.h>


@interface SKOverlayConfiguration : NSObject

@property (readonly, retain, nonatomic) NSObject<ASOOverlayConfiguration> *_backing; // ivar: __backing


-(id)_init;
-(id)initWithBacking:(id)arg0 ;


@end


#endif