// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEDATABUNDLEASSET_H
#define PHASEDATABUNDLEASSET_H

@class NSURL;


#import "PHASEAsset.h"

@interface PHASEDataBundleAsset : PHASEAsset {
    unique_ptr<Phase::DataBundle, std::default_delete<Phase::DataBundle>> _dataBundle;
}


@property (readonly) NSURL *url; // ivar: _url


+(id)new;
-(*void)getDataBundle;
-(id)init;
-(id)initWithUID:(id)arg0 assetRegistry:(id)arg1 ;
-(id)initWithURL:(id)arg0 uid:(id)arg1 dataBundle:(struct unique_ptr<Phase::DataBundle, std::default_delete<Phase::DataBundle>> )arg2 assetRegistry:(id)arg3 ;


@end


#endif