// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPASSWORDBREACHRESULTQUERY_H
#define WBSPASSWORDBREACHRESULTQUERY_H

@class NSDate, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachResultQuery : NSObject

@property (readonly, nonatomic) NSDate *dateLastModified; // ivar: _dateLastModified
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *persistentIdentifier; // ivar: _persistentIdentifier


+(id)dictionaryRepresentationsForResultQueries:(id)arg0 ;
+(id)resultQueriesFromDictionaryRepresentations:(id)arg0 ;
-(id)description;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithPersistentIdentifier:(id)arg0 dateLastModified:(id)arg1 ;


@end


#endif