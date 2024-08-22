// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFORYOUGADGETRANKSTORAGE_H
#define PXFORYOUGADGETRANKSTORAGE_H

@class NSString;
@protocol PXGadgetRankStorage;

#import <Foundation/Foundation.h>


@interface PXForYouGadgetRankStorage : NSObject <PXGadgetRankStorage>

 {
    NSString *_prefix;
}




+(id)customStorage;
+(id)defaultStorage;
+(id)rankableGadgetTypes;
-(BOOL)hasAnyStoredRank;
-(NSInteger)rankForGadgetType:(NSUInteger)arg0 ;
-(NSUInteger)gadgetTypeForRank:(NSInteger)arg0 ;
-(id)_initWithPrefix:(id)arg0 ;
-(id)_keyForGadgetType:(NSUInteger)arg0 ;
-(id)init;
-(void)resetStoredRanks;
-(void)setRank:(NSInteger)arg0 forGadgetType:(NSUInteger)arg1 ;


@end


#endif