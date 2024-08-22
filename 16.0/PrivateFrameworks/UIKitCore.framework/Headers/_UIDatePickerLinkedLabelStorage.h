// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDATEPICKERLINKEDLABELSTORAGE_H
#define _UIDATEPICKERLINKEDLABELSTORAGE_H

@class NSHashTable, NSCache;

#import <Foundation/Foundation.h>

#import "UILabel.h"

@interface _UIDatePickerLinkedLabelStorage : NSObject {
    UILabel *_sizingLabel;
    NSHashTable *_attachedLabels;
    NSUInteger _currentPriority;
    NSCache *_sizeCache;
}




-(BOOL)_cachedSizeForKey:(id)arg0 size:(struct CGSize *)arg1 ;
-(NSUInteger)_currentPriority;
-(id)init;
-(struct CGSize )_sizeForText:(id)arg0 font:(id)arg1 height:(CGFloat)arg2 overrideAttributes:(id)arg3 ;
-(void)_attachLabel:(id)arg0 ;
-(void)_detachLabel:(id)arg0 ;
-(void)_notifyAllLabelsExcept:(id)arg0 ;
-(void)_resetPriority;
-(void)_setCachedSize:(struct CGSize )arg0 forKey:(id)arg1 ;
-(void)_setPriority:(NSInteger)arg0 label:(id)arg1 ;


@end


#endif