// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUAUTOCOMPLETERESULTPARTITIONER_H
#define TUAUTOCOMPLETERESULTPARTITIONER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TUSearchController.h"

@interface TUAutocompleteResultPartitioner : NSObject

@property (retain, nonatomic) NSMutableArray *foundInMailResultsArray; // ivar: _foundInMailResultsArray
@property (retain, nonatomic) NSMutableArray *foundOnServersResultsArray; // ivar: _foundOnServersResultsArray
@property (retain, nonatomic) NSMutableArray *normalResultsArray; // ivar: _normalResultsArray
@property (weak) TUSearchController *searchController; // ivar: _searchController


+(BOOL)sourceTypeIsFoundInMail:(NSUInteger)arg0 ;
+(BOOL)sourceTypeIsFoundOnServers:(NSUInteger)arg0 ;
-(id)init;
-(id)searchResults;
-(void)addResult:(id)arg0 ;


@end


#endif