// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXVIDEOQUARTILEEVENT_H
#define SXVIDEOQUARTILEEVENT_H



#import "SXMediaEvent.h"

@interface SXVideoQuartileEvent : SXMediaEvent

@property (readonly, nonatomic) NSUInteger quartile; // ivar: _quartile


-(id)initWithQuartile:(NSUInteger)arg0 ;


@end


#endif