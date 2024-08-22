// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSITEMETADATAFETCHOPERATION_H
#define WBSSITEMETADATAFETCHOPERATION_H

@class NSOperation;


#import "WBSSiteMetadataRequest.h"

@interface WBSSiteMetadataFetchOperation : NSOperation

@property (readonly, nonatomic) WBSSiteMetadataRequest *request; // ivar: _request
@property (getter=_status, setter=_setStatus:) NSInteger status; // ivar: _status


+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(void)start;


@end


#endif