// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSLPRFICONCACHE_H
#define CSLPRFICONCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface CSLPRFIconCache : NSObject {
    NSCache *_cache;
}




+(id)sharedIconCache;
-(id)_loadMMappedImageWithName:(id)arg0 ;
-(id)_path;
-(id)_pathForIconName:(id)arg0 ;
-(id)iconForName:(id)arg0 fallBackToPersistentStoreIfNecessary:(BOOL)arg1 ;
-(id)init;
-(void)_writeMMappedImage:(id)arg0 withName:(id)arg1 ;
-(void)setIcon:(id)arg0 forName:(id)arg1 ;


@end


#endif