// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVRESPONSEITEM_H
#define COREDAVRESPONSEITEM_H

@class NSMutableArray, NSMutableSet;


#import "CoreDAVItem.h"
#import "CoreDAVErrorItem.h"
#import "CoreDAVItemWithHrefChildItem.h"
#import "CoreDAVMatchResultsItem.h"
#import "CoreDAVLeafItem.h"

@interface CoreDAVResponseItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVErrorItem *errorItem; // ivar: _errorItem
@property (retain, nonatomic) NSMutableArray *hrefs; // ivar: _hrefs
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *location; // ivar: _location
@property (retain, nonatomic) CoreDAVMatchResultsItem *matchResults; // ivar: _matchResults
@property (retain, nonatomic) NSMutableSet *propStats; // ivar: _propStats
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription; // ivar: _responseDescription
@property (retain, nonatomic) CoreDAVLeafItem *serverUID; // ivar: _serverUID
@property (retain, nonatomic) CoreDAVLeafItem *status; // ivar: _status


+(id)copyParseRules;
-(BOOL)hasPropertyError;
-(id)description;
-(id)firstHref;
-(id)init;
-(id)successfulPropertiesToValues;
-(void)addHref:(id)arg0 ;
-(void)addPropStat:(id)arg0 ;


@end


#endif