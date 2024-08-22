// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARCOMMANDTAGGINGRESULT_H
#define _EARCOMMANDTAGGINGRESULT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARCommandTaggingResult : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *commandTaggings; // ivar: _commandTaggings


-(id)_initWithCommandTaggings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif