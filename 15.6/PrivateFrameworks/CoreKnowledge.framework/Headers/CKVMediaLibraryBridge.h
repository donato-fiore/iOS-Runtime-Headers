// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVMEDIALIBRARYBRIDGE_H
#define CKVMEDIALIBRARYBRIDGE_H

@class MPMediaLibrary, KVItemMapper, NSString;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVMediaLibraryBridge : NSObject <CKVProviderDatasetBridge>

 {
    MPMediaLibrary *_mediaLibrary;
    KVItemMapper *_itemMapper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)init;
-(id)initWithMediaLibrary:(id)arg0 ;
-(id)originAppId;


@end


#endif