// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSREQUEST_H
#define PDSREQUEST_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "PDSRequestInfo.h"

@interface PDSRequest : NSObject

@property (readonly, nonatomic) NSSet *entries; // ivar: _entries
@property (retain, nonatomic) PDSRequestInfo *requestInfo; // ivar: _requestInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithEntries:(id)arg0 requestInfo:(id)arg1 ;


@end


#endif