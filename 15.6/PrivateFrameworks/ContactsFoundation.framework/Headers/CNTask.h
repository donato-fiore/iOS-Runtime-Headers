// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNTASK_H
#define CNTASK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNTask : NSObject {
    BOOL _cancelled;
}


@property (readonly, getter=isCancelled) BOOL cancelled;
@property (copy) NSString *name; // ivar: _name


+(id)taskWithBlock:(id)arg0 ;
+(id)taskWithError:(id)arg0 ;
+(id)taskWithName:(id)arg0 block:(id)arg1 ;
+(id)taskWithName:(id)arg0 error:(id)arg1 ;
+(id)taskWithName:(id)arg0 result:(id)arg1 ;
+(id)taskWithName:(id)arg0 subtasks:(id)arg1 ;
+(id)taskWithResult:(id)arg0 ;
-(BOOL)cancel;
-(id)description;
-(id)flatMap:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)map:(id)arg0 ;
-(id)profileWithTimeProvider:(id)arg0 os_log:(id)arg1 ;
-(id)recover:(id)arg0 ;
-(id)run;
-(id)run:(*id)arg0 ;


@end


#endif