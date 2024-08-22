// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSCATASSETMANAGER_H
#define CSCATASSETMANAGER_H

@protocol OS_dispatch_queue, CSCATAssetManagerDelegate;

#import <Foundation/Foundation.h>


@interface CSCATAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (weak, nonatomic) NSObject<CSCATAssetManagerDelegate> *delegate; // ivar: _delegate


+(id)getCATXPCConnection;
+(id)sharedInstance;
-(id)init;
-(void)downloadForManifest:(id)arg0 withAssetName:(id)arg1 ;
-(void)fetchRemoteCATAssetForResource:(id)arg0 withNameOfFile:(id)arg1 completion:(id)arg2 ;


@end


#endif