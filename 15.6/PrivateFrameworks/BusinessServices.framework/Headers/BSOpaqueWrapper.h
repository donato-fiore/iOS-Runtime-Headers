// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSOPAQUEWRAPPER_H
#define BSOPAQUEWRAPPER_H


#import <Foundation/Foundation.h>

#import "_BSOpaqueWrapper.h"

@interface BSOpaqueWrapper : NSObject {
    _BSOpaqueWrapper *_opaqueWrapper;
}


@property (readonly, retain, nonatomic) id *wrappedThing;


+(id)wrapperFor:(id)arg0 ;
-(id)initWithThing:(id)arg0 ;


@end


#endif