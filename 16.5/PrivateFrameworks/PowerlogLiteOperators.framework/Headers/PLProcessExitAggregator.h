// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPROCESSEXITAGGREGATOR_H
#define PLPROCESSEXITAGGREGATOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLProcessExitAggregator : NSObject <NSCopying>



@property NSUInteger exitReasonCode; // ivar: _exitReasonCode
@property unsigned char exitReasonNamespace; // ivar: _exitReasonNamespace
@property unsigned int labelIdx; // ivar: _labelIdx
@property unsigned int lastTTR; // ivar: _lastTTR


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif