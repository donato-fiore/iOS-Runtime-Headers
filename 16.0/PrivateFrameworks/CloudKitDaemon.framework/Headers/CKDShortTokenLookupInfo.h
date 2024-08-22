// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDSHORTTOKENLOOKUPINFO_H
#define CKDSHORTTOKENLOOKUPINFO_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKDShortTokenLookupInfo : NSObject <NSCopying>



@property (nonatomic) BOOL forceDSRefetch; // ivar: _forceDSRefetch
@property (retain, nonatomic) NSString *participantID; // ivar: _participantID
@property (retain, nonatomic) NSString *routingKey; // ivar: _routingKey
@property (retain, nonatomic) NSData *shortSharingTokenHashData; // ivar: _shortSharingTokenHashData
@property (nonatomic) BOOL shouldFetchRootRecord; // ivar: _shouldFetchRootRecord


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif