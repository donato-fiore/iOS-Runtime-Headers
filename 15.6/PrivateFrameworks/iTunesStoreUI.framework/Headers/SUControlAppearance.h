// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCONTROLAPPEARANCE_H
#define SUCONTROLAPPEARANCE_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUControlAppearance : NSObject <NSCopying>

 {
    NSMutableDictionary *_images;
    NSMutableDictionary *_textAttributes;
    NSMutableDictionary *_titlePositions;
}


@property (readonly, nonatomic) NSInteger numberOfImages;


-(id)_copyKeyForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)textAttributesForState:(NSUInteger)arg0 ;
-(struct UIOffset )titlePositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateImagesUsingBlock:(id)arg0 ;
-(void)enumerateTextAttributesUsingBlock:(id)arg0 ;
-(void)enumerateTitlePositionsUsingBlock:(id)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)styleBarButtonItem:(id)arg0 ;
-(void)styleButton:(id)arg0 ;


@end


#endif