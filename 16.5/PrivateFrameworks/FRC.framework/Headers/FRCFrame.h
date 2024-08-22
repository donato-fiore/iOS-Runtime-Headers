// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FRCFRAME_H
#define FRCFRAME_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FRCFrame : NSObject

@property (readonly, nonatomic) *__CVBuffer buffer; // ivar: _buffer
@property (readonly, nonatomic) NSDictionary *info; // ivar: _info
@property (readonly, nonatomic) ? presentationTimeStamp; // ivar: _presentationTimeStamp


-(id)initWithBuffer:(struct __CVBuffer *)arg0 presentationTimeStamp:(struct ? )arg1 ;
-(id)initWithBuffer:(struct __CVBuffer *)arg0 presentationTimeStamp:(struct ? )arg1 info:(id)arg2 ;
-(void)dealloc;


@end


#endif