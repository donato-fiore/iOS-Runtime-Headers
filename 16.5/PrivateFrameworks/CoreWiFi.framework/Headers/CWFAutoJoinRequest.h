// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFAUTOJOINREQUEST_H
#define CWFAUTOJOINREQUEST_H

@class NSUUID, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CWFAutoJoinParameters.h"

@interface CWFAutoJoinRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSDate *addedAt; // ivar: _addedAt
@property (nonatomic) BOOL allowAutoHotspotFallback; // ivar: _allowAutoHotspotFallback
@property (copy, nonatomic) CWFAutoJoinParameters *parameters; // ivar: _parameters
@property (copy, nonatomic) id *reply; // ivar: _reply


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif