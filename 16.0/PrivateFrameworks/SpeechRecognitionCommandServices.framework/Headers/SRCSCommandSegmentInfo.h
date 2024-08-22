// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRCSCOMMANDSEGMENTINFO_H
#define SRCSCOMMANDSEGMENTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SRCSCommandSegmentInfo : NSObject

@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSString *text; // ivar: _text


+(id)segmentInfoWith:(struct _NSRange )arg0 text:(id)arg1 ;
-(id)description;


@end


#endif