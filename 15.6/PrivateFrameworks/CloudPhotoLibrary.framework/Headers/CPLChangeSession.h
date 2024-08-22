// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLCHANGESESSION_H
#define CPLCHANGESESSION_H

@class NSString, NSProgress;
@protocol CPLAbstractObject;

#import <Foundation/Foundation.h>

#import "CPLLibraryManager.h"
#import "CPLPlatformObject.h"

@interface CPLChangeSession : NSObject <CPLAbstractObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLLibraryManager *libraryManager; // ivar: _libraryManager
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (readonly, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSProgress *sessionProgress; // ivar: _sessionProgress
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)platformImplementationProtocol;
+(id)shortDescription;
+(id)stateDescriptionForState:(NSUInteger)arg0 ;
-(id)createSessionContext;
-(id)init;
-(id)initWithLibraryManager:(id)arg0 ;
-(id)redactedDescription;
-(void)beginSessionWithKnownLibraryVersion:(id)arg0 resetTracker:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)finalizeWithCompletionHandler:(id)arg0 ;
-(void)tearDownWithCompletionHandler:(id)arg0 ;


@end


#endif