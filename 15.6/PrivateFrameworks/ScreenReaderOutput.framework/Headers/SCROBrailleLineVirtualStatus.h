// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCROBRAILLELINEVIRTUALSTATUS_H
#define SCROBRAILLELINEVIRTUALSTATUS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SCROBrailleLineVirtualStatus : NSObject

@property (nonatomic) int alignment; // ivar: _alignment
@property (nonatomic) char * cells; // ivar: _cells
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSInteger length; // ivar: _length


-(void)dealloc;


@end


#endif