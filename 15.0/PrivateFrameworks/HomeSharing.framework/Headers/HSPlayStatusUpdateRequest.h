// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSPLAYSTATUSUPDATEREQUEST_H
#define HSPLAYSTATUSUPDATEREQUEST_H



#import "HSRequest.h"

@interface HSPlayStatusUpdateRequest : HSRequest

@property (readonly, nonatomic) unsigned int interfaceID; // ivar: _interfaceID
@property (readonly, nonatomic) unsigned int revisionID; // ivar: _revisionID


-(BOOL)isConcurrent;
-(CGFloat)timeoutInterval;
-(id)canonicalResponseForResponse:(id)arg0 ;
-(id)initWithInterfaceID:(unsigned int)arg0 revisionID:(unsigned int)arg1 ;


@end


#endif