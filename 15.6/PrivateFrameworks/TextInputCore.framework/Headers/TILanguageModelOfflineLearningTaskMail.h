// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGTASKMAIL_H
#define TILANGUAGEMODELOFFLINELEARNINGTASKMAIL_H

@class NSCharacterSet, NSSet;
@protocol TILinguisticDataSource;


#import "TILanguageModelOfflineLearningTask.h"

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask {
    NSCharacterSet *_linePaddingCharacters;
    NSSet *_forwardedMessageSeparators;
    id<TILinguisticDataSource> *_dataSource;
}




+(id)dataSourceForTask;
-(id)dataSource;
-(id)forwardedMessageSeparators;
-(id)initWithClientIdentifier:(id)arg0 oneTimeTask:(BOOL)arg1 ;
-(id)linePaddingCharacters;


@end


#endif