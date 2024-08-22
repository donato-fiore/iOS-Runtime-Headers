// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPRIVATESEARCHQUERY_H
#define CSPRIVATESEARCHQUERY_H

@class NSString;


#import "CSSearchQuery.h"
#import "CSSearchConnection.h"

@interface CSPrivateSearchQuery : CSSearchQuery

@property (retain, nonatomic) NSString *indexPath; // ivar: _indexPath
@property (retain, nonatomic) NSString *resolvedIndexPath; // ivar: _resolvedIndexPath
@property (retain, nonatomic) CSSearchConnection *savedConnection; // ivar: _savedConnection


-(id)connection;
-(id)initWithPath:(id)arg0 queryString:(id)arg1 attributers:(id)arg2 ;
-(id)initWithPath:(id)arg0 queryString:(id)arg1 context:(id)arg2 ;
-(id)initWithPath:(id)arg0 queryString:(id)arg1 context:(id)arg2 attributes:(id)arg3 ;
-(void)start;


@end


#endif