// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKLOOKUPAPPPRIVACYPOLICYURLOPERATION_H
#define HKLOOKUPAPPPRIVACYPOLICYURLOPERATION_H

@class NSOperation, NSString, NSError, AMSPromise, NSURL;



@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy) NSError *error; // ivar: _error
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (retain) AMSPromise *outstandingPromise; // ivar: _outstandingPromise
@property (copy) NSURL *privacyPolicyURL; // ivar: _privacyPolicyURL


-(BOOL)isAsynchronous;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)_performLookup;
-(void)cancel;
-(void)start;


@end


#endif