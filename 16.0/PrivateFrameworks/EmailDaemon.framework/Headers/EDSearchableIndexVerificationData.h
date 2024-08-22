// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSEARCHABLEINDEXVERIFICATIONDATA_H
#define EDSEARCHABLEINDEXVERIFICATIONDATA_H

@class NSDate, NSString, NSNumber, NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexVerificationData : NSObject <NSCopying>



@property (retain, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (copy, nonatomic) NSString *deleted; // ivar: _deleted
@property (retain, nonatomic) NSNumber *flags; // ivar: _flags
@property (retain, nonatomic) NSNumber *indexedAsEmptySubject; // ivar: _indexedAsEmptySubject
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (copy, nonatomic) NSArray *toEmailAddresses; // ivar: _toEmailAddresses
@property (retain, nonatomic) NSNumber *transactionID; // ivar: _transactionID
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif