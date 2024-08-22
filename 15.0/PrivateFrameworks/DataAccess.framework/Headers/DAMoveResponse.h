// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAMOVERESPONSE_H
#define DAMOVERESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "DAMessageMoveRequest.h"

@interface DAMoveResponse : NSObject

@property (copy, nonatomic) NSString *destID; // ivar: _destID
@property (retain, nonatomic) DAMessageMoveRequest *origRequest; // ivar: _origRequest
@property (copy, nonatomic) NSString *sourceID; // ivar: _sourceID
@property (nonatomic) int status; // ivar: _status


-(id)description;
-(id)initWithStatus:(int)arg0 sourceID:(id)arg1 destID:(id)arg2 ;


@end


#endif