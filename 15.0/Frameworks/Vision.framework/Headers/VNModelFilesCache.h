// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNMODELFILESCACHE_H
#define VNMODELFILESCACHE_H


#import <Foundation/Foundation.h>


@interface VNModelFilesCache : NSObject {
    unique_ptr<cvml::util::model_file_cache, std::default_delete<cvml::util::model_file_cache>> m_impl;
}




+(BOOL)useFOpenForModelWithPath:(id)arg0 ;
+(id)sharedInstance;
-(id)init;
-(id)load:(id)arg0 ;
-(void)purgeAll;
-(void)unload:(id)arg0 ;


@end


#endif