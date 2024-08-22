// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYSERVICEVISIT_H
#define WBSHISTORYSERVICEVISIT_H

@class NSString;


#import "WBSHistoryServiceObject.h"

@interface WBSHistoryServiceVisit : WBSHistoryServiceObject

@property (nonatomic) NSInteger attributes; // ivar: _attributes
@property (nonatomic) NSInteger generation; // ivar: _generation
@property (readonly, nonatomic) BOOL httpNonGet; // ivar: _httpNonGet
@property (readonly, nonatomic) NSInteger itemID; // ivar: _itemID
@property (readonly, nonatomic) BOOL loadSuccessful; // ivar: _loadSuccessful
@property (nonatomic) NSInteger origin; // ivar: _origin
@property (nonatomic) NSInteger redirectDestination; // ivar: _redirectDestination
@property (nonatomic) NSInteger redirectSource; // ivar: _redirectSource
@property (nonatomic) int score; // ivar: _score
@property (readonly, nonatomic) BOOL synthesized; // ivar: _synthesized
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) CGFloat visitTime; // ivar: _visitTime


+(BOOL)supportsSecureCoding;
-(id)_initWithDatabaseID:(NSInteger)arg0 serviceVisit:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSQLRow:(id)arg0 ;
-(id)initWithVisit:(id)arg0 ;
-(id)visitWithUpdatedID:(NSInteger)arg0 updatedItemID:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif