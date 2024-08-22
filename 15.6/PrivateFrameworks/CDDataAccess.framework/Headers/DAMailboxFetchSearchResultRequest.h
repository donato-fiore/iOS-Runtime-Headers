// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAMAILBOXFETCHSEARCHRESULTREQUEST_H
#define DAMAILBOXFETCHSEARCHRESULTREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DAMailboxFetchSearchResultRequest : NSObject

@property (nonatomic) int bodyFormat; // ivar: _bodyFormat
@property (copy, nonatomic) NSString *folderID; // ivar: _folderID
@property (copy, nonatomic) NSString *longID; // ivar: _longID
@property (nonatomic) int maxSize; // ivar: _maxSize
@property (copy, nonatomic) NSString *serverID; // ivar: _serverID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initRequestForBodyFormat:(int)arg0 withFolderID:(id)arg1 withServerID:(id)arg2 withLongID:(id)arg3 withBodySizeLimit:(int)arg4 ;
-(id)initRequestForBodyFormat:(int)arg0 withLongID:(id)arg1 withBodySizeLimit:(int)arg2 ;


@end


#endif