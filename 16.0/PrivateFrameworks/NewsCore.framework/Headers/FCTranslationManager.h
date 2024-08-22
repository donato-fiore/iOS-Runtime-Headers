// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCTRANSLATIONMANAGER_H
#define FCTRANSLATIONMANAGER_H

@protocol FCTranslationManager, FCContentContext, FCTranslationProvider;

#import <Foundation/Foundation.h>

#import "FCAsyncSerialQueue.h"
#import "FCTranslationMap.h"

@interface FCTranslationManager : NSObject <FCTranslationManager>



@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, nonatomic) NSObject<FCTranslationProvider> *possiblyUnfetchedTranslationProvider;
@property (retain, nonatomic) FCAsyncSerialQueue *queue; // ivar: _queue
@property (retain, nonatomic) FCTranslationMap *translationMap; // ivar: _translationMap


-(id)initWithContentContext:(id)arg0 ;
-(void)fetchTranslationProvider:(id)arg0 ;


@end


#endif