// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSUPDATEREQUEST_H
#define HSUPDATEREQUEST_H



#import "HSRequest.h"

@interface HSUpdateRequest : HSRequest {
    NSInteger _connectionType;
}




+(id)requestWithDatabaseRevision:(unsigned int)arg0 sessionID:(unsigned int)arg1 connectionType:(NSInteger)arg2 ;
-(BOOL)isConcurrent;
-(CGFloat)timeoutInterval;
-(id)_bodyDataForDatabaseRevision:(unsigned int)arg0 sessionID:(unsigned int)arg1 ;
-(id)canonicalResponseForResponse:(id)arg0 ;
-(id)initWithDatabaseRevision:(unsigned int)arg0 sessionID:(unsigned int)arg1 connectionType:(NSInteger)arg2 ;


@end


#endif