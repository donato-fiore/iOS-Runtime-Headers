// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKRECORDDECRYPTINFO_H
#define CKRECORDDECRYPTINFO_H

@class NSError, CKRecord;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CKRecordDecryptInfo : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSObject<OS_dispatch_group> *decryptGroup; // ivar: _decryptGroup
@property (retain, nonatomic) NSError *error; // ivar: _error
@property NSUInteger numUnwrapAttempts; // ivar: _numUnwrapAttempts
@property (readonly, nonatomic) CKRecord *record; // ivar: _record


-(id)init;
-(id)initWithRecord:(id)arg0 callbackQueue:(id)arg1 ;
-(void)_setupDecryptCallbackForQueue:(id)arg0 ;


@end


#endif