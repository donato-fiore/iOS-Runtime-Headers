// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCCONTEXTPROVIDER_H
#define HMCCONTEXTPROVIDER_H

@class HMFObject, NSMutableArray;


#import "HMCContext.h"

@interface HMCContextProvider : HMFObject

@property (readonly) HMCContext *context; // ivar: _context
@property (readonly) NSMutableArray *redirections; // ivar: _redirections


-(id)futureInContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
-(void)registerForChangesOfDatabaseModels:(id)arg0 orWithModelIDs:(id)arg1 changeMask:(NSUInteger)arg2 selector:(SEL)arg3 ;
-(void)removeAllRegistrations;
-(void)unsafeSynchronousBlock:(id)arg0 ;


@end


#endif