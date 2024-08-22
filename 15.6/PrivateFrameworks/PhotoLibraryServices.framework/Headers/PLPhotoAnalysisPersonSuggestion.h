// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPHOTOANALYSISPERSONSUGGESTION_H
#define PLPHOTOANALYSISPERSONSUGGESTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLPhotoAnalysisPersonSuggestion : NSObject

@property (readonly, nonatomic) BOOL confirmed; // ivar: _confirmed
@property (readonly, nonatomic) NSInteger keyFaceClusterSequenceNumber; // ivar: _keyFaceClusterSequenceNumber
@property (readonly, copy, nonatomic) NSString *keyFaceLocalIdentifier; // ivar: _keyFaceLocalIdentifier
@property (readonly, nonatomic) NSInteger personFaceCount; // ivar: _personFaceCount
@property (readonly, copy, nonatomic) NSString *personLocalIdentifier; // ivar: _personLocalIdentifier


-(id)description;
-(id)initWithSuggestionDictionary:(id)arg0 ;
-(id)suggestionDictionaryRepresentation;


@end


#endif