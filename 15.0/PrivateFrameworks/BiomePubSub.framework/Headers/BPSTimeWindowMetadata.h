// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSTIMEWINDOWMETADATA_H
#define BPSTIMEWINDOWMETADATA_H

@class NSDateInterval;
@protocol BPSWindowMetadata;

#import <Foundation/Foundation.h>


@interface BPSTimeWindowMetadata : NSObject <BPSWindowMetadata>



@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval


-(id)init;
-(id)initWithDateInterval:(id)arg0 ;


@end


#endif