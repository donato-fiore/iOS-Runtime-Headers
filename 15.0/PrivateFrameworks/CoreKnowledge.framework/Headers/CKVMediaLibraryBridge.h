// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVMEDIALIBRARYBRIDGE_H
#define CKVMEDIALIBRARYBRIDGE_H

@class MPMediaLibrary, NSString;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVMediaLibraryBridge : NSObject <CKVProviderDatasetBridge>

 {
    MPMediaLibrary *_mediaLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateVocabularyItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(Class)itemClass;
-(id)init;
-(id)initWithMediaLibrary:(id)arg0 ;
-(id)originApp;


@end


#endif