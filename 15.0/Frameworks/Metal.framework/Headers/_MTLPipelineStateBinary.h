// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MTLPIPELINESTATEBINARY_H
#define _MTLPIPELINESTATEBINARY_H

@class NSData;
@protocol MTLPipelineStateBinary;

#import <Foundation/Foundation.h>


@interface _MTLPipelineStateBinary : NSObject <MTLPipelineStateBinary>



@property (readonly, retain) NSData *binary; // ivar: _binary
@property (readonly) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)initWithBinary:(id)arg0 uniqueIdentifier:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif