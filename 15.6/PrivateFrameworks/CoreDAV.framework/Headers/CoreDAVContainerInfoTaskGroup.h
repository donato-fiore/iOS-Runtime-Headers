// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVCONTAINERINFOTASKGROUP_H
#define COREDAVCONTAINERINFOTASKGROUP_H

@class NSMutableSet, NSString, NSSet;
@protocol CoreDAVPropFindTaskDelegate, CoreDAVContainerInfoTaskGroupDelegate;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>

 {
    int _phase;
    NSMutableSet *_containers;
    NSString *_appSpecificHomeSetPropNameSpace;
    NSString *_appSpecificHomeSetPropName;
}


@property (nonatomic) int containerInfoDepth; // ivar: _containerInfoDepth
@property (readonly, nonatomic) NSSet *containerURLs; // ivar: _containerURLs
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CoreDAVContainerInfoTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_copyContainerParserMappings;
-(id)_copyContainerWithURL:(id)arg0 andProperties:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg0 containerURLs:(id)arg1 taskManager:(id)arg2 ;
-(int)containerInfoDepthForURL:(id)arg0 ;
-(void)_getContainerHomeSet;
-(void)_getContainerTopLevelInfo;
-(void)propFindTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)startTaskGroup;
-(void)taskGroupWillCancelWithError:(id)arg0 ;


@end


#endif