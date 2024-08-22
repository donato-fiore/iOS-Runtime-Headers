// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXDATAANNOTATION_H
#define AXDATAANNOTATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AXDataPoint.h"

@interface AXDataAnnotation : NSObject

@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) AXDataPoint *location; // ivar: _location
@property (nonatomic) BOOL playsHaptic; // ivar: _playsHaptic
@property (nonatomic) BOOL speakDuringPlayback; // ivar: _speakDuringPlayback


-(id)initWithLocation:(id)arg0 ;
-(id)initWithLocation:(id)arg0 label:(id)arg1 ;


@end


#endif