// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXKONASPEECHSEGMENT_H
#define AXKONASPEECHSEGMENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AXKonaMarker.h"

@interface AXKonaSpeechSegment : NSObject {
    char * _latin1String;
}


@property (retain, nonatomic) AXKonaMarker *marker; // ivar: _marker
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSString *text; // ivar: _text


+(id)encodingReplacements;
-(char *)latin1String;
-(id)init;
-(void)dealloc;


@end


#endif