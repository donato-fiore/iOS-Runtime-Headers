// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIASTARTTIMECOLLECTION_H
#define VUIMEDIASTARTTIMECOLLECTION_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "VUIMediaStartTimeInfo.h"

@interface VUIMediaStartTimeCollection : NSObject

@property (readonly, nonatomic) NSArray *allStartTimeInfos;
@property (readonly, nonatomic) VUIMediaStartTimeInfo *preferredStartTimeInfo;
@property (retain, nonatomic) NSMutableArray *startTimeInfos; // ivar: _startTimeInfos


+(void)initialize;
-(void)addStartTimeInfo:(id)arg0 ;
-(void)removeAllStartTimeInfos;


@end


#endif