// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFETCHINSTRUCTORENDPOINTRESULTOBJECT_H
#define CRKFETCHINSTRUCTORENDPOINTRESULTOBJECT_H

@class CATTaskResultObject, NSXPCListenerEndpoint;



@interface CRKFetchInstructorEndpointResultObject : CATTaskResultObject

@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif