// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWFORMAT_H
#define BWFORMAT_H


#import <Foundation/Foundation.h>


@interface BWFormat : NSObject

@property (readonly) *opaqueCMFormatDescription formatDescription;
@property (readonly) unsigned int mediaType;


+(id)formatByResolvingRequirements:(id)arg0 ;
+(id)formatByResolvingRequirements:(id)arg0 printErrors:(BOOL)arg1 ;


@end


#endif