// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARAPPEARANCESTORAGE_H
#define _UIBARAPPEARANCESTORAGE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UIBarAppearanceStorage : NSObject {
    NSMutableDictionary *_backgroundImages;
}




+(NSInteger)typicalBarPosition;
-(BOOL)hasAnyCustomBackgroundImage;
-(id)allBackgroundImages;
-(id)backgroundImageForBarPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(void)setAllBackgroundImages:(id)arg0 ;
-(void)setBackgroundImage:(id)arg0 forBarPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;


@end


#endif