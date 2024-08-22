// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPRODUCERSETTINGS_H
#define OKPRODUCERSETTINGS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "OKMediaFeeder.h"
#import "OKProducerPreset.h"

@interface OKProducerSettings : NSObject {
    NSArray *_audioURLs;
}


@property (retain) NSArray *audioURLs;
@property (retain) NSArray *guidelines; // ivar: _guidelines
@property (retain) OKMediaFeeder *mediaFeeder; // ivar: _mediaFeeder
@property (retain) OKProducerPreset *preset; // ivar: _preset


-(void)dealloc;


@end


#endif