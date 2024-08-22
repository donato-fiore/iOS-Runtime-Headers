// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRVIRTUALOUTPUTCONTEXTMANAGER_H
#define MRVIRTUALOUTPUTCONTEXTMANAGER_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface MRVirtualOutputContextManager : NSObject {
    NSMutableDictionary *_ouputContextMap;
}


@property (readonly, nonatomic) NSArray *outputContext; // ivar: _outputContext


+(id)sharedManager;
-(id)fetchForUID:(id)arg0 ;
-(void)addOutputContext:(id)arg0 ;
-(void)removeOutputContext:(id)arg0 ;


@end


#endif