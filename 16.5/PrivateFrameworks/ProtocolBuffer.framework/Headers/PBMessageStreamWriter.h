// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBMESSAGESTREAMWRITER_H
#define PBMESSAGESTREAMWRITER_H

@class NSOutputStream;

#import <Foundation/Foundation.h>


@interface PBMessageStreamWriter : NSObject {
    NSOutputStream *_stream;
}




-(BOOL)writeMessage:(id)arg0 ;
-(id)initWithOutputStream:(id)arg0 ;


@end


#endif