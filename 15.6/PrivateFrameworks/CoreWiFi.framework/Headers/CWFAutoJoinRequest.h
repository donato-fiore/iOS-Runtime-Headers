// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFAUTOJOINREQUEST_H
#define CWFAUTOJOINREQUEST_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "CWFAutoJoinParameters.h"

@interface CWFAutoJoinRequest : NSObject

@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) CWFAutoJoinParameters *parameters; // ivar: _parameters
@property (copy, nonatomic) id *reply; // ivar: _reply


-(id)description;


@end


#endif