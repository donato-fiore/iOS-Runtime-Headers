// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDCHECKQUEUEREQUESTOPTIONS_H
#define ASDCHECKQUEUEREQUESTOPTIONS_H



#import "ASDRequestOptions.h"

@interface ASDCheckQueueRequestOptions : ASDRequestOptions

@property (nonatomic) NSUInteger reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReason:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif