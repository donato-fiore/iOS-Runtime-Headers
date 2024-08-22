// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPUIAUTHENTICATIONROWDESCRIPTOR_H
#define FPUIAUTHENTICATIONROWDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FPUIAuthenticationRowDescriptor : NSObject <NSCopying>



@property (copy, nonatomic) id *accessoryButtonTapHandler; // ivar: _accessoryButtonTapHandler
@property (copy, nonatomic) Class cellClass; // ivar: _cellClass
@property (copy, nonatomic) id *cellCustomizationHandler; // ivar: _cellCustomizationHandler
@property (copy, nonatomic) NSString *cellReuseIdentifier; // ivar: _cellReuseIdentifier
@property (nonatomic) NSInteger cellSelectionStyle; // ivar: _cellSelectionStyle
@property (copy, nonatomic) id *cellWillDisplayHandler; // ivar: _cellWillDisplayHandler
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (nonatomic) CGFloat shouldHighlight; // ivar: _shouldHighlight


+(Class)defaultCellClass;
+(id)defaultCellReuseIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif