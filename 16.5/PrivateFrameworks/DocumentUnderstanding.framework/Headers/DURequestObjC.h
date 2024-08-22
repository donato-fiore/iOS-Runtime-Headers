// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUREQUESTOBJC_H
#define DUREQUESTOBJC_H


#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding9DURequest.h"

@interface DURequestObjC : NSObject {
    _TtC21DocumentUnderstanding9DURequest *_underlyingRequest;
}




-(id)initWithClient:(id)arg0 contentType:(id)arg1 strategies:(id)arg2 ;
-(void)executeWithDocument:(id)arg0 completion:(id)arg1 ;


@end


#endif