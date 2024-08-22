// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCAFETCHSQLITERESPONSE_H
#define WCAFETCHSQLITERESPONSE_H

@class NSArray;


#import "WCAFetchResponse.h"

@interface WCAFetchSQLiteResponse : WCAFetchResponse

@property (copy, nonatomic) NSArray *records; // ivar: _records


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecords:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif