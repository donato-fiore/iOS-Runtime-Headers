// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSNOWPLAYINGSTREAMSESSION_H
#define CLSNOWPLAYINGSTREAMSESSION_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface CLSNowPlayingStreamSession : NSObject

@property (copy, nonatomic) NSArray *events; // ivar: _events
@property (readonly, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (readonly, nonatomic) NSDate *localStartDate; // ivar: _localStartDate


+(id)playbackStreamSessionDateSortDescriptors;
-(id)debugDescription;
-(id)description;
-(id)initWithDataCluster:(id)arg0 ;
-(id)initWithEvents:(id)arg0 ;


@end


#endif