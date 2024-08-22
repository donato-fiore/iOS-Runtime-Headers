// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBLOCALSQLCONTEXTRECORD_H
#define HMBLOCALSQLCONTEXTRECORD_H

@class HMFObject, NSData;


#import "HMBModel.h"

@interface HMBLocalSQLContextRecord : HMFObject

@property (readonly, nonatomic) NSData *externalID; // ivar: _externalID
@property (readonly, nonatomic) HMBModel *model; // ivar: _model


-(id)attributeDescriptions;
-(id)initWithModel:(id)arg0 externalID:(id)arg1 ;


@end


#endif