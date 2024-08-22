// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSSTRINGFORMATTINGOPTIONS_H
#define _NSSTRINGFORMATTINGOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSNumber.h"

@interface _NSStringFormattingOptions : NSObject <NSCopying>



@property (retain) NSNumber *pluralizationNumber; // ivar: _pluralizationNumber


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif