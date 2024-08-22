// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYPRODUCTINFOSECTION_H
#define VUILIBRARYPRODUCTINFOSECTION_H

@class NSArray, NSString, UIView;

#import <Foundation/Foundation.h>


@interface VUILibraryProductInfoSection : NSObject

@property (copy, nonatomic) NSArray *dataViews; // ivar: _dataViews
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) UIView *headerContentView; // ivar: _headerContentView
@property (readonly, nonatomic) UIEdgeInsets headerMargin;
@property (nonatomic) UIEdgeInsets headerPadding; // ivar: _headerPadding
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing


+(id)dataViewWithString:(id)arg0 ;
+(id)headerViewWithString:(id)arg0 ;


@end


#endif