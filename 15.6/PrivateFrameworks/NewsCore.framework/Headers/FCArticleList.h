// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCARTICLELIST_H
#define FCARTICLELIST_H

@class NSArray, NSString, NSDate, NTPBArticleListRecord;

#import <Foundation/Foundation.h>

#import "FCArticleListEditorialMetadata.h"
#import "FCInterestToken.h"

@interface FCArticleList : NSObject

@property (readonly, nonatomic) NSArray *articleIDs; // ivar: _articleIDs
@property (readonly, nonatomic) FCArticleListEditorialMetadata *editorialMetadata; // ivar: _editorialMetadata
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) FCInterestToken *interestToken; // ivar: _interestToken
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) NTPBArticleListRecord *record; // ivar: _record
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithRecord:(id)arg0 interestToken:(id)arg1 ;


@end


#endif