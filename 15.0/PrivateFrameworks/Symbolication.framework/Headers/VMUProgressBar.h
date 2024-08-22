// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUPROGRESSBAR_H
#define VMUPROGRESSBAR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VMUProgressBar : NSObject {
    NSString *_title;
    NSUInteger _totalItems;
    NSString *_itemName;
    NSUInteger _itemsDone;
    NSUInteger _successes;
    NSUInteger _failures;
}




-(void)_printProgressBar;
-(void)itemCompleteWithStatus:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 withTotalItems:(NSUInteger)arg1 ;
-(void)updateItemName:(id)arg0 ;


@end


#endif