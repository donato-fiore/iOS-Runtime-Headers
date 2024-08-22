// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FBSSNAPSHOTLAYER_H
#define _FBSSNAPSHOTLAYER_H


#import <Foundation/Foundation.h>


@interface _FBSSnapshotLayer : NSObject

@property (readonly, nonatomic) CATransform3D baseTransform; // ivar: _baseTransform
@property (readonly, nonatomic) unsigned int contextID; // ivar: _contextID


-(id)initWithContextID:(unsigned int)arg0 baseTransform:(struct CATransform3D )arg1 ;


@end


#endif