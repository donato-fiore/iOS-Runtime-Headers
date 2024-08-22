// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLSOCKETVERSIONMESSAGE_H
#define WLSOCKETVERSIONMESSAGE_H



#import "WLSocketMessage.h"

@interface WLSocketVersionMessage : WLSocketMessage

@property (nonatomic) NSUInteger version; // ivar: _version


-(id)initWithVersion:(NSUInteger)arg0 ;


@end


#endif