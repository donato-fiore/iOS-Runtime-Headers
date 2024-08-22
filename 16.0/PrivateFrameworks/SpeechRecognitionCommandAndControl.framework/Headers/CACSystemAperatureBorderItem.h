// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACSYSTEMAPERATUREBORDERITEM_H
#define CACSYSTEMAPERATUREBORDERITEM_H

@class NSString;
@protocol AXElementNamesItem;

#import <Foundation/Foundation.h>


@interface CACSystemAperatureBorderItem : NSObject <AXElementNamesItem>

 {
    CGRect _frame;
}


@property (readonly, nonatomic) CGRect elementFrame;
@property (readonly, nonatomic) CGSize elementLabelContainerSize;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) BOOL isSpacer;


+(id)borderItemsForRect:(struct CGRect )arg0 minimumRect:(struct CGRect )arg1 ;


@end


#endif