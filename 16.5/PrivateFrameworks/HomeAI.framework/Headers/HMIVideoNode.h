// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEONODE_H
#define HMIVIDEONODE_H

@class HMFObject, NSError;



@interface HMIVideoNode : HMFObject {
    NSInteger _status;
    NSError *_error;
}


@property (readonly) NSError *error;
@property (readonly) NSInteger status;




@end


#endif