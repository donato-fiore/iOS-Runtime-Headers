// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKEDITCOMMAND_H
#define WKEDITCOMMAND_H


#import <Foundation/Foundation.h>


@interface WKEditCommand : NSObject {
    RefPtr<WebKit::WebEditCommandProxy, WTF::RawPtrTraits<WebKit::WebEditCommandProxy>, WTF::DefaultRefDerefTraits<WebKit::WebEditCommandProxy>> _command;
}




-(*void)command;
-(id)initWithWebEditCommandProxy:(*void)arg0 ;


@end


#endif