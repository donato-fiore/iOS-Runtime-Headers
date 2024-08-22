// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EARKEYWORDFINDER_H
#define EARKEYWORDFINDER_H


#import <Foundation/Foundation.h>


@interface EARKeywordFinder : NSObject {
    unique_ptr<quasar::KeywordFinder, std::default_delete<quasar::KeywordFinder>> _kwf;
}




+(void)initialize;
-(id)correctedResultWithKeyword:(id)arg0 tokenizedKeyword:(id)arg1 preItnSausage:(id)arg2 preItnOneBest:(id)arg3 preItnOneBestIndices:(id)arg4 nbestSize:(NSInteger)arg5 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif