// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEINPUTSTRINGTOKENIZER_H
#define CNAUTOCOMPLETEINPUTSTRINGTOKENIZER_H

@class CNFuture;

#import <Foundation/Foundation.h>


@interface CNAutocompleteInputStringTokenizer : NSObject

@property (retain) CNFuture *nameStringTokenizer; // ivar: _nameStringTokenizer


+(id)lazyNameStringTokenizerWithLocale:(id)arg0 ;
+(id)tokensFromString:(id)arg0 ;
-(id)expandCJKNames:(SEL)arg0 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)tokensFromString:(id)arg0 ;


@end


#endif