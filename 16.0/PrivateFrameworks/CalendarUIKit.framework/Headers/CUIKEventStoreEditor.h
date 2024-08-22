// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKEVENTSTOREEDITOR_H
#define CUIKEVENTSTOREEDITOR_H

@class NSString;
@protocol CUIKEditor, OS_os_log;

#import <Foundation/Foundation.h>


@interface CUIKEventStoreEditor : NSObject <CUIKEditor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *logHandle;
@property (readonly) Class superclass;


-(BOOL)deleteEvent:(id)arg0 span:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)saveCalendar:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveEvent:(id)arg0 span:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)saveNewEvents:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(void)deleteCalendar:(id)arg0 forEntityType:(NSUInteger)arg1 ;
-(void)deleteEvents:(id)arg0 span:(NSInteger)arg1 ;
-(void)saveChangesToEvents:(id)arg0 span:(NSInteger)arg1 ;


@end


#endif