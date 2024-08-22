// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVCONTAINERINFOSYNCTASKGROUP_H
#define COREDAVCONTAINERINFOSYNCTASKGROUP_H

@class NSString, NSURL;
@protocol CoreDAVTaskDelegate, CoreDAVContainerInfoSyncProvider;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>

 {
    NSString *_previousSyncToken;
    NSURL *_containerURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CoreDAVContainerInfoSyncProvider> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)containerItemClass;
-(id)copyContainerParserMappings;
-(id)initWithContainerURL:(id)arg0 previousSyncToken:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif