// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBAUTOFILLTESTARCHIVE_H
#define UIKBAUTOFILLTESTARCHIVE_H

@class NSMutableDictionary, NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "UIKBAutoFillTestExpectedResult.h"
#import "UIView.h"
#import "UINavigationItem.h"

@interface UIKBAutoFillTestArchive : NSObject <NSCoding, NSCopying>

 {
    NSMutableDictionary *_tableViewTagToDataSource;
}


@property (retain, nonatomic) UIKBAutoFillTestExpectedResult *expectedResult; // ivar: _expectedResult
@property (copy, nonatomic) NSString *navigationControllerClassName; // ivar: _navigationControllerClassName
@property (copy, nonatomic) NSString *presentingViewControllerClassName; // ivar: _presentingViewControllerClassName
@property (nonatomic) BOOL requiresNavigationControllerNesting; // ivar: _requiresNavigationControllerNesting
@property (retain, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (copy, nonatomic) NSString *viewControllerClassName; // ivar: _viewControllerClassName
@property (retain, nonatomic) UINavigationItem *viewControllerNavigationItem; // ivar: _viewControllerNavigationItem
@property (copy, nonatomic) NSString *viewControllerTitle; // ivar: _viewControllerTitle


+(id)autoFillTestArchiveWithData:(id)arg0 ;
-(id)autoFillTestArchiveData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)tableViewDataSourceWithTag:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setTableViewDataSource:(id)arg0 forTableViewWithTag:(NSInteger)arg1 ;


@end


#endif