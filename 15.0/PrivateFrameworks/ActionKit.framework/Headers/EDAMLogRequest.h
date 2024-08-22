// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMLOGREQUEST_H
#define EDAMLOGREQUEST_H



#import "FATObject.h"
#import "EDAMSearchRecord.h"

@interface EDAMLogRequest : FATObject

@property (retain, nonatomic) EDAMSearchRecord *searchRecord; // ivar: _searchRecord


+(id)structFields;
+(id)structName;


@end


#endif