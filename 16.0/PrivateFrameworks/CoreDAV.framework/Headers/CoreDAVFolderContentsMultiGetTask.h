// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVFOLDERCONTENTSMULTIGETTASK_H
#define COREDAVFOLDERCONTENTSMULTIGETTASK_H



#import "CoreDAVContainerMultiGetTask.h"

@interface CoreDAVFolderContentsMultiGetTask : CoreDAVContainerMultiGetTask



-(id)copyAdditionalPropElements;
-(id)initWithURLs:(id)arg0 atContainerURL:(id)arg1 appSpecificDataItemClass:(Class)arg2 ;
-(void)setAdditionalProperties:(id)arg0 onDataItem:(id)arg1 ;


@end


#endif