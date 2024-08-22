// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDJOBSCHEDULERREQUESTOPTIONS_H
#define ASDJOBSCHEDULERREQUESTOPTIONS_H



#import "ASDRequestOptions.h"

@interface ASDJobSchedulerRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL verbose; // ivar: _verbose


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif