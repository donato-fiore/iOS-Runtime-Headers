// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBCAPABILITIES_H
#define OBCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface OBCapabilities : NSObject

@property (nonatomic) BOOL preventOpeningSafari; // ivar: _preventOpeningSafari
@property (nonatomic) BOOL preventURLDataDetection; // ivar: _preventURLDataDetection


+(id)sharedCapabilities;
-(BOOL)isWAPI;


@end


#endif