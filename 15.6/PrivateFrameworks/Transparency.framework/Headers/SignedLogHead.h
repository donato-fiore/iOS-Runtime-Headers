// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNEDLOGHEAD_H
#define SIGNEDLOGHEAD_H

@class NSData;


#import "SignedObjectHolder.h"
#import "LogHead.h"

@interface SignedLogHead : SignedObjectHolder

@property BOOL gossip; // ivar: _gossip
@property (retain, nonatomic) NSData *logHead;
@property (readonly) LogHead *parsedLogHead;


+(id)signedTypeWithObject:(id)arg0 ;
+(id)signedTypeWithObject:(id)arg0 verifier:(id)arg1 dataStore:(id)arg2 ;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)copyManagedObject:(*id)arg0 ;
-(id)createManagedObjectWithError:(*id)arg0 ;
-(void)storeSignatureResult:(NSUInteger)arg0 signatureError:(*id)arg1 ;


@end


#endif