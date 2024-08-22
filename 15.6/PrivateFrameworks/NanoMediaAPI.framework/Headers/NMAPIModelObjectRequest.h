// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMAPIMODELOBJECTREQUEST_H
#define NMAPIMODELOBJECTREQUEST_H

@class MPModelObject;


#import "NMAPIRequest.h"

@interface NMAPIModelObjectRequest : NMAPIRequest

@property (retain, nonatomic) MPModelObject *modelObject; // ivar: _modelObject


-(Class)responseParserClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithModelObject:(id)arg0 ;
-(id)urlComponentsWithStoreURLBag:(id)arg0 error:(*id)arg1 ;


@end


#endif