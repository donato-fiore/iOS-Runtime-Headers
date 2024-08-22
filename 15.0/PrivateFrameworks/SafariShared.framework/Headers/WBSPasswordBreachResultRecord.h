// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPASSWORDBREACHRESULTRECORD_H
#define WBSPASSWORDBREACHRESULTRECORD_H

@class NSDate, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachResultRecord : NSObject

@property (readonly, nonatomic) NSDate *dateLastModified; // ivar: _dateLastModified
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly, nonatomic) NSUInteger result; // ivar: _result


+(id)dictionaryRepresentationsForResultRecords:(id)arg0 ;
+(id)resultRecordsFromDictionaryRepresentations:(id)arg0 ;
-(id)description;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithPersistentIdentifier:(id)arg0 result:(NSUInteger)arg1 dateLastModified:(id)arg2 ;


@end


#endif