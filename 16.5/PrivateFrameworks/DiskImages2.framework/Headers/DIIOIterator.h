// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIIOITERATOR_H
#define DIIOITERATOR_H



#import "DIIOObject.h"

@interface DIIOIterator : DIIOObject

@property (nonatomic) BOOL startedOver; // ivar: _startedOver


-(id)initWithIOIterator:(unsigned int)arg0 retain:(BOOL)arg1 ;
-(unsigned int)copyNextObject;


@end


#endif