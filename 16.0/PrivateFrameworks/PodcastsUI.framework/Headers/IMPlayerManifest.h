// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPLAYERMANIFEST_H
#define IMPLAYERMANIFEST_H

@class NSUserActivity, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMPlayerItem.h"

@interface IMPlayerManifest : NSObject

@property (retain, nonatomic) NSUserActivity *activity; // ivar: _activity
@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) NSUInteger currentIndex; // ivar: _currentIndex
@property (retain, nonatomic) IMPlayerItem *currentItem; // ivar: _currentItem
@property (nonatomic) BOOL isLoaded; // ivar: _isLoaded
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)supportedActivityTypes;
+(void)createManifestForActivity:(id)arg0 completion:(id)arg1 ;
+(void)registerManifestForRestoration:(Class)arg0 ;
+(void)restoreActivity:(id)arg0 completion:(id)arg1 ;
-(BOOL)hasNext;
-(BOOL)hasPrevious;
-(id)description;
-(id)init;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)_load:(id)arg0 ;
-(void)assertIndexInBounds:(NSUInteger)arg0 ;
-(void)load:(id)arg0 ;
-(void)next;
-(void)nextManifest:(id)arg0 ;
-(void)postLoadedAdditionalItemsNotification;
-(void)postManifestDidChangeNotification;
-(void)previous;


@end


#endif