// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMEVENTLISTENERREFERENCE_H
#define IMEVENTLISTENERREFERENCE_H


#import <Foundation/Foundation.h>

#import "IMEventListener.h"

@interface IMEventListenerReference : NSObject

@property (readonly, weak, nonatomic) IMEventListener *eventListener; // ivar: _eventListener


-(id)initWithEventListener:(id)arg0 ;


@end


#endif