// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNEDMAPHEAD_H
#define SIGNEDMAPHEAD_H

@class NSData;


#import "SignedObjectHolder.h"
#import "MapHead.h"

@interface SignedMapHead : SignedObjectHolder

@property (retain, nonatomic) NSData *mapHead;
@property (readonly) MapHead *parsedMapHead;


+(id)signedTypeWithObject:(id)arg0 ;
+(id)signedTypeWithObject:(id)arg0 verifier:(id)arg1 dataStore:(id)arg2 ;
-(NSUInteger)verifyMMD:(CGFloat)arg0 error:(*id)arg1 ;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)copyManagedObject:(*id)arg0 ;
-(id)createManagedObjectWithError:(*id)arg0 ;


@end


#endif