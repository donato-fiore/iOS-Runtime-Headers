// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSFPCLUSTERENUMERATORHELPER_H
#define LIVEFSFPCLUSTERENUMERATORHELPER_H

@class NSString;
@protocol NSFileProviderEnumerator;

#import <Foundation/Foundation.h>

#import "LiveFSFPExtensionHelper.h"
#import "LiveFSFPItemHelper.h"

@interface LiveFSFPClusterEnumeratorHelper : NSObject <NSFileProviderEnumerator>

 {
    LiveFSFPExtensionHelper *ext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) LiveFSFPItemHelper *enumeratedItem; // ivar: _enumeratedItem
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isDir; // ivar: _isDir
@property int state; // ivar: _state
@property (readonly) Class superclass;


+(id)newWithEnumeratedItem:(id)arg0 extension:(id)arg1 error:(*id)arg2 ;
-(id)initWithEnumeratedItem:(id)arg0 extension:(id)arg1 error:(*id)arg2 ;
-(void)doShutdown;
-(void)enumerateItemsForObserver:(id)arg0 startingAtPage:(id)arg1 ;
-(void)invalidate;


@end


#endif