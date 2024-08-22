// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMBUSINESSQUERYRESULT_H
#define EDAMBUSINESSQUERYRESULT_H

@class NSArray, NSNumber, NSDictionary;


#import "FATObject.h"

@interface EDAMBusinessQueryResult : FATObject

@property (retain, nonatomic) NSArray *experts; // ivar: _experts
@property (retain, nonatomic) NSArray *matchingNotebooks; // ivar: _matchingNotebooks
@property (retain, nonatomic) NSNumber *totalNotebooks; // ivar: _totalNotebooks
@property (retain, nonatomic) NSDictionary *totalNotesByNotebook; // ivar: _totalNotesByNotebook


+(id)structFields;
+(id)structName;


@end


#endif