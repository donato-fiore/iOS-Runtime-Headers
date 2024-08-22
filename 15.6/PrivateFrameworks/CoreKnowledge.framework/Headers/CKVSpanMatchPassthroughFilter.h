// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSPANMATCHPASSTHROUGHFILTER_H
#define CKVSPANMATCHPASSTHROUGHFILTER_H

@class NSString;
@protocol CKVSpanMatchResultInterpreter;

#import <Foundation/Foundation.h>


@interface CKVSpanMatchPassthroughFilter : NSObject <CKVSpanMatchResultInterpreter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)interpretSpanMatchResults:(id)arg0 ofTokenChain:(id)arg1 ;


@end


#endif