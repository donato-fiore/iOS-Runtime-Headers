// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSETVOLUMEREQUEST_H
#define CRKSETVOLUMEREQUEST_H

@class CATTaskRequest;



@interface CRKSetVolumeRequest : CATTaskRequest

@property (nonatomic) CGFloat volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif