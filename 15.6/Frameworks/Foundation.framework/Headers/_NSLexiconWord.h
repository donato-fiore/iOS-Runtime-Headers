// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSLEXICONWORD_H
#define _NSLEXICONWORD_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSLexiconWord : NSObject

@property (readonly, nonatomic) ? attributes; // ivar: _attributes
@property (readonly, copy, nonatomic) NSArray *parts; // ivar: _parts
@property (readonly, copy, nonatomic) NSString *token; // ivar: _token


-(id)description;
-(void)dealloc;


@end


#endif