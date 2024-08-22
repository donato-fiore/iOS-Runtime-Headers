// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MTLCOMMANDBUFFERENCODERINFO_H
#define _MTLCOMMANDBUFFERENCODERINFO_H

@class NSString, NSArray;
@protocol MTLCommandBufferEncoderInfo;

#import <Foundation/Foundation.h>


@interface _MTLCommandBufferEncoderInfo : NSObject <MTLCommandBufferEncoderInfo>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *debugSignposts; // ivar: _debugSignposts
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorState; // ivar: _errorState
@property (nonatomic) NSUInteger globalTraceObjectID; // ivar: _globalTraceObjectID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger uniqueID; // ivar: _uniqueID


-(void)dealloc;


@end


#endif