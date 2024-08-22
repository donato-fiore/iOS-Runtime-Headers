// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLDAAPITEMSREQUEST_H
#define BLDAAPITEMSREQUEST_H

@class NSNumber;


#import "BLDAAPURLRequest.h"

@interface BLDAAPItemsRequest : BLDAAPURLRequest

@property (retain, nonatomic) NSNumber *bagDatabaseID; // ivar: _bagDatabaseID


-(id)createDaapURL:(id)arg0 ;
-(id)initWithDSID:(id)arg0 reason:(NSInteger)arg1 databaseID:(id)arg2 body:(id)arg3 ;


@end


#endif