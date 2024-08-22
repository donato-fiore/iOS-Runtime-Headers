// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXDATAPROMISE_H
#define IXDATAPROMISE_H

@class NSError, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IXDataPromiseSeed.h"

@interface IXDataPromise : NSObject <NSSecureCoding>



@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (readonly, nonatomic) NSUInteger creatorIdentifier;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSError *errorOccurred;
@property (nonatomic) NSUInteger errorSourceIdentifier; // ivar: _errorSourceIdentifier
@property (readonly, nonatomic) NSError *localError;
@property (readonly, nonatomic) BOOL localIsComplete;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat percentComplete;
@property (retain, nonatomic) IXDataPromiseSeed *seed; // ivar: _seed
@property (readonly, nonatomic) Class seedClass;
@property (readonly, nonatomic) NSUInteger totalBytesNeededOnDisk;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(BOOL)promiseExists:(*BOOL)arg0 withUUID:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)outstandingPromisesForCreator:(NSUInteger)arg0 ;
-(BOOL)cancelForReason:(id)arg0 client:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)cancelForReason:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)preflightWithError:(*id)arg0 ;
-(BOOL)resetWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 client:(NSUInteger)arg1 diskSpaceNeeded:(NSUInteger)arg2 ;
-(id)initWithSeed:(id)arg0 ;
-(void)_clientDelegate_didCancelWithError:(id)arg0 client:(NSUInteger)arg1 ;
-(void)_clientDelegate_didComplete;
-(void)_updateInitWithSeed:(id)arg0 notifyDaemon:(BOOL)arg1 ;
-(void)cancelForReason:(id)arg0 client:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)cancelForReason:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)resetWithCompletion:(id)arg0 ;


@end


#endif