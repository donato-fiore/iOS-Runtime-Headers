// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSSEQUENCE_H
#define BPSSEQUENCE_H

@class NSEnumerator;


#import "BMBookmarkablePublisher.h"

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator; // ivar: _enumerator


+(id)new;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithEnumerator:(id)arg0 ;
-(id)initWithSequence:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif