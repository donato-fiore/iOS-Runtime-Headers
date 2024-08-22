// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DUREQUESTSTRATEGYOBJC_H
#define DUREQUESTSTRATEGYOBJC_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding17DURequestStrategy.h"
#import "DURequestContentTypeObjC.h"

@interface DURequestStrategyObjC : NSObject {
    _TtC21DocumentUnderstanding17DURequestStrategy *_underlyingStrategy;
    DURequestContentTypeObjC *_objCContentType;
}


@property (readonly, nonatomic) DURequestContentTypeObjC *contentType;
@property (copy, nonatomic) NSString *modelIdentifier;


-(id)initWithContentType:(id)arg0 preferredModelIdentifier:(id)arg1 ;


@end


#endif