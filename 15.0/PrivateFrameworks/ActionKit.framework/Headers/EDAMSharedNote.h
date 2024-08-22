// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMSHAREDNOTE_H
#define EDAMSHAREDNOTE_H

@class NSNumber;


#import "FATObject.h"
#import "EDAMIdentity.h"

@interface EDAMSharedNote : FATObject

@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) EDAMIdentity *recipientIdentity; // ivar: _recipientIdentity
@property (retain, nonatomic) NSNumber *serviceAssigned; // ivar: _serviceAssigned
@property (retain, nonatomic) NSNumber *serviceCreated; // ivar: _serviceCreated
@property (retain, nonatomic) NSNumber *serviceUpdated; // ivar: _serviceUpdated
@property (retain, nonatomic) NSNumber *sharerUserID; // ivar: _sharerUserID


+(id)structFields;
+(id)structName;


@end


#endif