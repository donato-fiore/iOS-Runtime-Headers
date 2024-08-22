// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMTIMERANGES_H
#define DOMTIMERANGES_H



#import "DOMObject.h"

@interface DOMTimeRanges : DOMObject

@property (readonly) unsigned int length;


-(CGFloat)end:(unsigned int)arg0 ;
-(CGFloat)start:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif