// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKPRESENCEDETECTOPERATION_H
#define BKPRESENCEDETECTOPERATION_H



#import "BKOperation.h"

@interface BKPresenceDetectOperation : BKOperation

@property (nonatomic) NSInteger priority; // ivar: _priority


-(id)optionsDictionaryWithError:(*id)arg0 ;
-(void)startBioOperation:(BOOL)arg0 reply:(id)arg1 ;


@end


#endif