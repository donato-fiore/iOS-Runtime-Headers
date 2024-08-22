// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSHAREBACKSUGGESTER_H
#define PGSHAREBACKSUGGESTER_H

@class NSArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGShareBackSuggester : NSObject {
    NSArray *_sources;
    unsigned short _positiveProcessingValue;
    NSObject<OS_os_log> *_loggingConnection;
}




+(id)shareBackSuggesterForCMMWithLoggingConnection:(id)arg0 graph:(id)arg1 ;
+(id)shareBackSuggesterForSyndicationWithLoggingConnection:(id)arg0 photoLibrary:(id)arg1 graph:(id)arg2 ;
-(id)initWithSources:(id)arg0 positiveProcessingValue:(unsigned short)arg1 loggingConnection:(id)arg2 graph:(id)arg3 ;
-(id)suggesterResultsForInputs:(id)arg0 inGraph:(id)arg1 error:(*id)arg2 ;
-(id)suggesterResultsForUnclusteredSuggesterInputs:(id)arg0 inGraph:(id)arg1 error:(*id)arg2 ;


@end


#endif