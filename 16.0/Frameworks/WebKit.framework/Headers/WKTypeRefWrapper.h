// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKTYPEREFWRAPPER_H
#define WKTYPEREFWRAPPER_H


#import <Foundation/Foundation.h>


@interface WKTypeRefWrapper : NSObject {
    WKRetainPtr<const void *> _object;
}


@property (readonly) *void object;


-(id)initWithObject:(*void)arg0 ;


@end


#endif