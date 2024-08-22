// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKMEDIAMANAGER_H
#define OKMEDIAMANAGER_H

@class NSMutableDictionary;
@protocol OKMediaManagerDelegate;

#import <Foundation/Foundation.h>


@interface OKMediaManager : NSObject {
    NSMutableDictionary *_mediaSourcesByScheme;
}


@property (nonatomic) NSObject<OKMediaManagerDelegate> *delegate; // ivar: _delegate


+(id)defaultManager;
-(Class)mediaItemClassForURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mediaItemForURL:(id)arg0 ;
-(id)mediaItemsForURLs:(id)arg0 ;
-(id)mediaURLForMediaObject:(id)arg0 ;
-(id)mediaURLsForMediaObjects:(id)arg0 ;
-(void)addMediaItemClass:(Class)arg0 ;
-(void)dealloc;
-(void)removeMediaItemClass:(Class)arg0 ;


@end


#endif