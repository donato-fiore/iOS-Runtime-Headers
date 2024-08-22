// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVMKCALENDARTASK_H
#define CALDAVMKCALENDARTASK_H

@class CoreDAVTask, NSSet;
@protocol CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate;



@interface CalDAVMkcalendarTask : CoreDAVTask

@property (nonatomic) NSObject<CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> *delegate;
@property (retain, nonatomic) NSSet *setElements; // ivar: _setElements


-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)description;
-(id)httpMethod;
-(id)initWithPropertiesToSet:(id)arg0 atURL:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;
-(void)setSupportForEvents:(BOOL)arg0 tasks:(BOOL)arg1 ;


@end


#endif