// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSSEQUENCE_H
#define BPSSEQUENCE_H

@class NSArray;


#import "BMBookmarkablePublisher.h"

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSArray *sequence; // ivar: _sequence


-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithSequence:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif