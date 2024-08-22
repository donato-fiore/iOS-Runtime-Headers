// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENTESTRESULTPERSISTENTSESSION_H
#define ENTESTRESULTPERSISTENTSESSION_H

@class NSData, NSString, NSDictionary, NSArray, NSError;

#import <Foundation/Foundation.h>


@interface ENTestResultPersistentSession : NSObject

@property (copy, nonatomic) NSData *HMACKey; // ivar: _HMACKey
@property (copy, nonatomic) NSString *certificate; // ivar: _certificate
@property (copy, nonatomic) NSDictionary *fetchedMetadata; // ivar: _fetchedMetadata
@property (copy, nonatomic) NSString *revisionToken; // ivar: _revisionToken
@property (copy, nonatomic) NSArray *teks; // ivar: _teks
@property (copy, nonatomic) NSError *verificationError; // ivar: _verificationError
@property (copy, nonatomic) NSString *verificationToken; // ivar: _verificationToken




@end


#endif