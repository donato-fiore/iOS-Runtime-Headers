// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARDDAVFOLDERQUERYTASK_H
#define CARDDAVFOLDERQUERYTASK_H



#import "CoreDAVContainerQueryTask.h"

@interface CardDAVFolderQueryTask : CoreDAVContainerQueryTask



-(id)initWithSearchTerms:(id)arg0 searchLimit:(NSUInteger)arg1 atURL:(id)arg2 appSpecificDataItemClass:(Class)arg3 ;
-(void)addFiltersToXMLData:(id)arg0 ;


@end


#endif