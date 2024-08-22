// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTACTRECORDRESULTBUFFER_H
#define PPCONTACTRECORDRESULTBUFFER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PPContactRecordResultBuffer : NSObject

@property (nonatomic) BOOL loadingComplete; // ivar: _loadingComplete
@property (readonly, nonatomic) NSMutableArray *records; // ivar: _records


-(id)init;


@end


#endif