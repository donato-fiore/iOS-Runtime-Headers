// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERSCHEMAACTIONBASE_H
#define MCMCONTAINERSCHEMAACTIONBASE_H

@class NSString;
@protocol MCMContainerSchemaAction;

#import <Foundation/Foundation.h>

#import "MCMContainerSchemaContext.h"

@interface MCMContainerSchemaActionBase : NSObject <MCMContainerSchemaAction>



@property (readonly, nonatomic) MCMContainerSchemaContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)actionIdentifier;
+(id)actionWithName:(id)arg0 arguments:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
+(void)_resolveArguments:(id)arg0 toPathArgument:(*id)arg1 context:(id)arg2 ;
+(void)_resolveArguments:(id)arg0 toSourcePathArgument:(*id)arg1 destPathArgument:(*id)arg2 context:(id)arg3 ;
-(BOOL)backupFileURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)arg0 error:(*id)arg1 duringBlock:(id)arg2 ;
-(BOOL)makedirAtURL:(id)arg0 followTerminalSymlink:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)performWithError:(*id)arg0 ;
-(id)initWithContext:(id)arg0 ;


@end


#endif