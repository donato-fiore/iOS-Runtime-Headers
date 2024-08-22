// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXEXTENSIONPROCESSMANNGER_H
#define _EXEXTENSIONPROCESSMANNGER_H

@class NSString, NSMapTable;
@protocol _EXExtensionProcessObserver;

#import <Foundation/Foundation.h>


@interface _EXExtensionProcessMannger : NSObject <_EXExtensionProcessObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMapTable *processExtensionMap; // ivar: _processExtensionMap
@property os_unfair_lock_s processExtensionMapLock; // ivar: _processExtensionMapLock
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(id)processForExtension:(id)arg0 error:(*id)arg1 ;
-(void)processDidInvalidate:(id)arg0 ;


@end


#endif