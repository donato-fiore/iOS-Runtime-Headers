// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSLEXICONLEMMA_H
#define _NSLEXICONLEMMA_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSLexiconLemma : NSObject

@property (readonly, nonatomic) ? attributes; // ivar: _attributes
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSArray *words; // ivar: _words


-(id)description;
-(id)replacementWordsForToken:(id)arg0 addingAttributes:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif