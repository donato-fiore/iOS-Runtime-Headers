// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSBROWSEREQUEST_H
#define HSBROWSEREQUEST_H



#import "HSRequest.h"

@interface HSBrowseRequest : HSRequest



+(id)requestWithDatabaseID:(unsigned int)arg0 browseGroupType:(NSInteger)arg1 ;
-(id)_stringForBrowseGroupType:(NSInteger)arg0 ;
-(id)canonicalResponseForResponse:(id)arg0 ;
-(id)initWithDatabaseID:(unsigned int)arg0 browseGroupType:(NSInteger)arg1 ;


@end


#endif