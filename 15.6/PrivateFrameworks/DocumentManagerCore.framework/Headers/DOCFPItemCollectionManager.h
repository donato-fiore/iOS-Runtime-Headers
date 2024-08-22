// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCFPITEMCOLLECTIONMANAGER_H
#define DOCFPITEMCOLLECTIONMANAGER_H

@class NSCountedSet, NSArray;

#import <Foundation/Foundation.h>


@interface DOCFPItemCollectionManager : NSObject {
    NSCountedSet *_activeCollections;
}


@property (readonly, copy, nonatomic) NSArray *observingCollections;


+(id)sharedManager;
-(id)init;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForegroundNotification;
-(void)collectionDidStartObserving:(id)arg0 ;
-(void)collectionDidStopObserving:(id)arg0 ;


@end


#endif