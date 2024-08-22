// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MTLFUNCTIONLOGDEBUGLOCATION_H
#define _MTLFUNCTIONLOGDEBUGLOCATION_H

@class NSURL, NSString;
@protocol MTLFunctionLogDebugLocation;

#import <Foundation/Foundation.h>

#import "MTLDebugLocation.h"

@interface _MTLFunctionLogDebugLocation : NSObject <MTLFunctionLogDebugLocation>

 {
    MTLDebugLocation *_debugLocation;
}


@property (readonly) NSURL *URL; // ivar: _URL
@property (readonly) NSUInteger column;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *functionName;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger line;
@property (readonly) Class superclass;


-(id)initWithDebugLocation:(id)arg0 ;
-(void)dealloc;


@end


#endif