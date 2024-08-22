// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSTREAMWRITER_H
#define BRCSTREAMWRITER_H

@class NSOutputStream;

#import <Foundation/Foundation.h>


@interface BRCStreamWriter : NSObject {
    NSOutputStream *_outputStream;
}




-(id)initWithOutputStream:(id)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif