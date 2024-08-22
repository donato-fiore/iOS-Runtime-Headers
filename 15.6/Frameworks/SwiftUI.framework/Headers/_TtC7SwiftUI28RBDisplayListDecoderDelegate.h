// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7SWIFTUI28RBDISPLAYLISTDECODERDELEGATE_H
#define _TTC7SWIFTUI28RBDISPLAYLISTDECODERDELEGATE_H

@protocol RBDecoderDelegate;

#import <Foundation/Foundation.h>


@interface _TtC7SwiftUI28RBDisplayListDecoderDelegate : NSObject <RBDecoderDelegate>

 {
    ? decoder;
}




-(id)decodedImageContentsWithData:(id)arg0 type:(*int)arg1 error:(*id)arg2 ;
-(id)init;
-(struct CGFont *)decodedCGFontWithData:(id)arg0 error:(*id)arg1 ;


@end


#endif