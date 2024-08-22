// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNEDMUTATIONTIMESTAMP_H
#define SIGNEDMUTATIONTIMESTAMP_H

@class NSString, NSData;


#import "SignedObjectHolder.h"

@interface SignedMutationTimestamp : SignedObjectHolder

@property (retain) NSString *application; // ivar: _application
@property (retain, nonatomic) NSData *mutation;


+(id)signedTypeWithObject:(id)arg0 ;
+(id)signedTypeWithObject:(id)arg0 verifier:(id)arg1 dataStore:(id)arg2 ;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)copyManagedObjectWithError:(*id)arg0 ;
-(id)parsedMutationWithError:(*id)arg0 ;


@end


#endif