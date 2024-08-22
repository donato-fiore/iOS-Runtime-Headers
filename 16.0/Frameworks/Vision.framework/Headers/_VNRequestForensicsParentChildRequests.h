// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VNREQUESTFORENSICSPARENTCHILDREQUESTS_H
#define _VNREQUESTFORENSICSPARENTCHILDREQUESTS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VNRequest.h"

@interface _VNRequestForensicsParentChildRequests : NSObject

@property (readonly, copy, nonatomic) NSArray *orderedChildRequests; // ivar: _orderedChildRequests
@property (readonly, nonatomic) VNRequest *parentRequest; // ivar: _parentRequest


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithParentRequest:(id)arg0 orderedChildRequests:(id)arg1 ;


@end


#endif