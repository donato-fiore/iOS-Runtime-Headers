// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSPRIVATESEARCHABLEINDEX_H
#define CSPRIVATESEARCHABLEINDEX_H

@class NSString;


#import "CSSearchableIndex.h"
#import "CSIndexConnection.h"

@interface CSPrivateSearchableIndex : CSSearchableIndex

@property BOOL attemptedIndexPathResolution; // ivar: _attemptedIndexPathResolution
@property (retain, nonatomic) NSString *indexPath; // ivar: _indexPath
@property (retain, nonatomic) NSString *resolvedIndexPath; // ivar: _resolvedIndexPath
@property (nonatomic) int resolvedIndexPathErrorCode; // ivar: _resolvedIndexPathErrorCode
@property (retain, nonatomic) CSIndexConnection *savedConnection; // ivar: _savedConnection


+(id)defaultSearchableIndex;
-(id)connection;
-(id)initWithPath:(id)arg0 ;
-(id)xpc_dictionary_for_command:(char *)arg0 requiresInitialization:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif