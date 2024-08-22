// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NTKFACESNAPSHOTCLIENTPROXY_H
#define _NTKFACESNAPSHOTCLIENTPROXY_H

@protocol NTKFaceSnapshotClient;

#import <Foundation/Foundation.h>


@interface _NTKFaceSnapshotClientProxy : NSObject {
    id<NTKFaceSnapshotClient> *_proxy;
}




-(id)initWithWeakProxy:(id)arg0 ;
-(void)faceSnapshotChangedForKey:(id)arg0 ;


@end


#endif