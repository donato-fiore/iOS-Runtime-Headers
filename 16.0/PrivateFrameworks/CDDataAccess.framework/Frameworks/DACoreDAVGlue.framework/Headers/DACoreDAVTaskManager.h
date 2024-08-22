// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACOREDAVTASKMANAGER_H
#define DACOREDAVTASKMANAGER_H

@class DATaskManager, NSMutableSet, NSString, NSRunLoop;
@protocol CoreDAVTaskManager;



@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager>

 {
    NSMutableSet *_applicationsShowingActivity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSRunLoop *workRunLoop;


-(id)initWithAccount:(id)arg0 ;
-(void)_updateSpinner:(BOOL)arg0 ;
-(void)coreDAVTaskDidFinish:(id)arg0 ;
-(void)coreDAVTaskEndModal:(id)arg0 ;
-(void)coreDAVTaskRequestModal:(id)arg0 ;
-(void)dealloc;
-(void)submitIndependentCoreDAVTask:(id)arg0 ;
-(void)submitQueuedCoreDAVTask:(id)arg0 ;
-(void)taskManagerDidAddTask:(id)arg0 ;
-(void)taskManagerWillRemoveTask:(id)arg0 ;


@end


#endif