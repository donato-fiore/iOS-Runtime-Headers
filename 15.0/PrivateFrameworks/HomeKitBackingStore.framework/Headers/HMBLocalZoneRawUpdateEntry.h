// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBLOCALZONERAWUPDATEENTRY_H
#define HMBLOCALZONERAWUPDATEENTRY_H

@class HMFObject, NSData;


#import "HMBModel.h"

@interface HMBLocalZoneRawUpdateEntry : HMFObject

@property (retain, nonatomic) NSData *encoded; // ivar: _encoded
@property (retain, nonatomic) HMBModel *model; // ivar: _model


-(id)initWithModel:(id)arg0 encoded:(id)arg1 ;


@end


#endif