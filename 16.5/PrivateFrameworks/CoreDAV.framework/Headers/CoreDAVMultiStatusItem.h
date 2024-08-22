// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVMULTISTATUSITEM_H
#define COREDAVMULTISTATUSITEM_H

@class NSMutableArray, NSSet;


#import "CoreDAVItem.h"
#import "CoreDAVLeafItem.h"

@interface CoreDAVMultiStatusItem : CoreDAVItem

@property (retain, nonatomic) NSMutableArray *orderedResponses; // ivar: _orderedResponses
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription; // ivar: _responseDescription
@property (readonly, nonatomic) NSSet *responses;


+(id)copyParseRules;
-(id)description;
-(id)init;
-(void)addResponse:(id)arg0 ;


@end


#endif