// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMDATAANNOTATION_H
#define AXMDATAANNOTATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AXMDataPoint.h"

@interface AXMDataAnnotation : NSObject

@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) AXMDataPoint *location; // ivar: _location
@property (nonatomic) BOOL playsHaptic; // ivar: _playsHaptic
@property (nonatomic) BOOL speakDuringPlayback; // ivar: _speakDuringPlayback


-(id)initWithLocation:(id)arg0 ;
-(id)initWithLocation:(id)arg0 label:(id)arg1 ;


@end


#endif