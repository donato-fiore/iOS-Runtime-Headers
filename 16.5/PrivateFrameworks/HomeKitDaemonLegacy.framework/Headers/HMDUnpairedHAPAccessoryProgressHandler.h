// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUNPAIREDHAPACCESSORYPROGRESSHANDLER_H
#define HMDUNPAIREDHAPACCESSORYPROGRESSHANDLER_H

@class HMFObject, NSUUID;



@interface HMDUnpairedHAPAccessoryProgressHandler : HMFObject

@property (retain, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(id)initWithAccessoryUUID:(id)arg0 progressHandler:(id)arg1 ;


@end


#endif