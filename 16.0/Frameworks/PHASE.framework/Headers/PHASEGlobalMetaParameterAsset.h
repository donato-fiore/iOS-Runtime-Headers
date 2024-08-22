// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEGLOBALMETAPARAMETERASSET_H
#define PHASEGLOBALMETAPARAMETERASSET_H



#import "PHASEAsset.h"

@interface PHASEGlobalMetaParameterAsset : PHASEAsset {
    *void _metaParamReference;
    unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> _metaParamOwnedAsset;
    MetaParamState _metaParamState;
}




+(id)new;
-(*void)getMetaParamState;
-(*void)getMetaParameter;
-(id)init;
-(id)initWithUID:(id)arg0 assetRegistry:(id)arg1 ;
-(id)initWithUID:(id)arg0 metaParameterWeakReference:(*void)arg1 assetRegistry:(id)arg2 ;
-(id)initWithUID:(id)arg0 ownedMetaParameter:(struct unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> )arg1 assetRegistry:(id)arg2 ;


@end


#endif