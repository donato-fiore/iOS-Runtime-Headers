// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFHISTORYANALYZER_H
#define PFHISTORYANALYZER_H


#import <Foundation/Foundation.h>

#import "PFHistoryAnalyzerOptions.h"

@interface PFHistoryAnalyzer : NSObject {
    PFHistoryAnalyzerOptions *_options;
}




-(BOOL)processTransaction:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)instantiateNewAnalyzerContextForChangesInStore:(id)arg0 ;
-(void)dealloc;


@end


#endif