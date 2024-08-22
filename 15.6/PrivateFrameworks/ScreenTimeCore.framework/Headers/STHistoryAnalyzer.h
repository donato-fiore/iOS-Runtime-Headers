// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STHISTORYANALYZER_H
#define STHISTORYANALYZER_H

@class NSPersistentHistoryToken;

#import <Foundation/Foundation.h>


@interface STHistoryAnalyzer : NSObject

@property (readonly, nonatomic) NSPersistentHistoryToken *finalToken; // ivar: _finalToken


+(BOOL)_changedObjectBelongsToFamily:(id)arg0 context:(id)arg1 ;
-(BOOL)_isChangeInteresting:(id)arg0 ;
-(id)deltasForStore:(id)arg0 inManagedObjectContext:(id)arg1 sinceToken:(id)arg2 ignoreAuthor:(id)arg3 finalToken:(*id)arg4 error:(*id)arg5 ;


@end


#endif