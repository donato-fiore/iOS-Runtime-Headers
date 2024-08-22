// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETCOLORSTORE_H
#define ETCOLORSTORE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface ETColorStore : NSObject {
    NSMutableArray *_colors;
    NSUInteger _selectedColorIndex;
    BOOL _selectedIndexLoaded;
}


@property (readonly, nonatomic) NSArray *colors;
@property (nonatomic) NSUInteger selectedColorIndex;


+(id)defaultStore;
-(id)init;
-(void)addDefaultsObserver;
-(void)dealloc;
-(void)defaultsChanged:(id)arg0 ;
-(void)saveColor:(id)arg0 forIndex:(NSUInteger)arg1 ;


@end


#endif