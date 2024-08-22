// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LACACHEDEXTERNALIZEDCONTEXT_H
#define LACACHEDEXTERNALIZEDCONTEXT_H

@class NSData;
@protocol LAContextExternalizationProt, LAContextExternalizationObserverProt;

#import <Foundation/Foundation.h>


@interface LACachedExternalizedContext : NSObject {
    id<LAContextExternalizationProt> *_externalizationDelegate;
}


@property (retain) NSData *cachedExternalizedContext; // ivar: _cachedExternalizedContext
@property (weak, nonatomic) NSObject<LAContextExternalizationObserverProt> *externalizationObserver; // ivar: _externalizationObserver
@property (readonly, nonatomic) NSData *externalizedContext;


-(id)externalizedContextWithError:(*id)arg0 ;
-(id)initWithExternalizationDelegate:(id)arg0 ;
-(id)initWithExternalizedContext:(id)arg0 ;
-(void)externalizedContextWithReply:(id)arg0 ;


@end


#endif