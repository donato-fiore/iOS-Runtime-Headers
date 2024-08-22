// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUPNEXTMEMORIESGENERATIONRESULT_H
#define PXUPNEXTMEMORIESGENERATIONRESULT_H

@class NSString, PHFetchResult;

#import <Foundation/Foundation.h>


@interface PXUpNextMemoriesGenerationResult : NSObject

@property (readonly, nonatomic) NSString *debugInfo; // ivar: _debugInfo
@property (readonly, nonatomic) PHFetchResult *memories; // ivar: _memories


-(id)initWithMemories:(id)arg0 debugInfo:(id)arg1 ;


@end


#endif