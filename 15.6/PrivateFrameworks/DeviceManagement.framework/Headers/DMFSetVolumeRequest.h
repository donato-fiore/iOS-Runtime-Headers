// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFSETVOLUMEREQUEST_H
#define DMFSETVOLUMEREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFSetVolumeRequest : DMFTaskRequest

@property (nonatomic) float volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif