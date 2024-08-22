// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HSITEMSREQUEST_H
#define HSITEMSREQUEST_H



#import "HSRequest.h"

@interface HSItemsRequest : HSRequest

@property (nonatomic) BOOL includeHiddenItems; // ivar: _includeHiddenItems
@property (nonatomic) BOOL shouldParseResponse; // ivar: _shouldParseResponse


+(id)requestWithDatabaseID:(unsigned int)arg0 ;
+(id)requestWithDatabaseID:(unsigned int)arg0 containerID:(unsigned int)arg1 ;
-(CGFloat)timeoutInterval;
-(id)canonicalResponseForResponse:(id)arg0 ;
-(id)initWithAction:(id)arg0 ;
-(id)initWithDatabaseID:(unsigned int)arg0 ;
-(id)initWithDatabaseID:(unsigned int)arg0 containerID:(unsigned int)arg1 ;


@end


#endif