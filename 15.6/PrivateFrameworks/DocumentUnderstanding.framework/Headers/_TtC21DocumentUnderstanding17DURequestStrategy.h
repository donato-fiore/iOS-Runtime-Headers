// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21DOCUMENTUNDERSTANDING17DUREQUESTSTRATEGY_H
#define _TTC21DOCUMENTUNDERSTANDING17DUREQUESTSTRATEGY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding20DURequestContentType.h"

@interface _TtC21DocumentUnderstanding17DURequestStrategy : NSObject {
    ? modelIdentifier;
}


@property (nonatomic, retain) _TtC21DocumentUnderstanding20DURequestContentType *contentType; // ivar: contentType
@property (nonatomic, copy) NSString *modelIdentifier;


-(id)init;
-(id)initWithContentType:(id)arg0 preferredModelIdentifier:(id)arg1 ;


@end


#endif