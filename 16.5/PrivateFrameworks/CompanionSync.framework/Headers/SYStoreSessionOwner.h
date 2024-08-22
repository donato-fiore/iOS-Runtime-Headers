// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYSTORESESSIONOWNER_H
#define SYSTORESESSIONOWNER_H

@class NSDictionary, NSString;
@protocol SYSessionDelegate;

#import <Foundation/Foundation.h>

#import "SYSession.h"
#import "SYStore.h"

@interface SYStoreSessionOwner : NSObject <SYSessionDelegate>



@property (copy, nonatomic) NSDictionary *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorCallback; // ivar: _errorCallback
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *idsOptions; // ivar: _idsOptions
@property (readonly, nonatomic) BOOL isResetSync;
@property (copy, nonatomic) id *onComplete; // ivar: _onComplete
@property (retain, nonatomic) SYSession *session; // ivar: _session
@property (weak, nonatomic) SYStore *store; // ivar: _store
@property (readonly) Class superclass;


-(BOOL)syncSession:(id)arg0 resetDataStoreWithError:(*id)arg1 ;
-(BOOL)syncSession:(id)arg0 rollbackChangesWithError:(*id)arg1 ;
// -(unsigned int)syncSession:(id)arg0 enqueueChanges:(id)arg1 error:(unk)arg2  ;
-(void)syncSession:(id)arg0 applyChanges:(id)arg1 completion:(id)arg2 ;
-(void)syncSession:(id)arg0 didEndWithError:(id)arg1 ;


@end


#endif