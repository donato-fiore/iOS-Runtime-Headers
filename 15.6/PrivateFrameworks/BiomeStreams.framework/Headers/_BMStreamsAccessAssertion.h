// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BMSTREAMSACCESSASSERTION_H
#define _BMSTREAMSACCESSASSERTION_H

@class NSString;
@protocol BMStreamsAccessAssertion;

#import <Foundation/Foundation.h>

#import "BMStreamsAccessDescriptor.h"

@interface _BMStreamsAccessAssertion : NSObject <BMStreamsAccessAssertion>

 {
    NSInteger _handle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMStreamsAccessDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDescriptor:(id)arg0 extensionToken:(id)arg1 ;
-(void)dealloc;


@end


#endif