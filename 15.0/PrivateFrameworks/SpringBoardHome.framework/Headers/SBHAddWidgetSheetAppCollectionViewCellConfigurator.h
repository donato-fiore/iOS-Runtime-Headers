// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHADDWIDGETSHEETAPPCOLLECTIONVIEWCELLCONFIGURATOR_H
#define SBHADDWIDGETSHEETAPPCOLLECTIONVIEWCELLCONFIGURATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SBHIconImageCache.h"

@interface SBHAddWidgetSheetAppCollectionViewCellConfigurator : NSObject {
    NSMutableDictionary *_nonAppIconImageCache;
}


@property (readonly, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache


-(id)initWithIconCache:(id)arg0 ;
-(void)configureCell:(id)arg0 withApplicationWidgetCollection:(id)arg1 ;


@end


#endif