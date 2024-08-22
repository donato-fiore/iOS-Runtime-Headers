// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDBREACHQUEUEDPASSWORD_H
#define WBSPASSWORDBREACHQUEUEDPASSWORD_H

@class NSMutableArray, NSUUID, NSData, NSArray, WBSPair;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachQueuedPassword : NSObject {
    NSMutableArray *_bucketIdentifierAndHashStack;
    NSUUID *_uuid;
    NSData *_highFrequencyEncodedPassword;
}


@property (readonly, nonatomic) NSData *highFrequencyEncodedPasswordData;
@property (readonly, nonatomic) NSArray *persistentIdentifiers; // ivar: _persistentIdentifiers
@property (readonly, nonatomic) NSUInteger remainingHashCount;
@property (readonly, nonatomic) WBSPair *topBucketIdentiferAndHash;
@property (readonly, nonatomic) NSUUID *uuid;


-(id)description;
-(id)initFakePasswordWithContext:(id)arg0 ;
-(id)initWithCredentials:(id)arg0 context:(id)arg1 ;
-(void)pushBucketIdentifiersAndHashesFromQueuedPassword:(id)arg0 ;
-(void)removeTopBucketIdentifierAndHash;


@end


#endif