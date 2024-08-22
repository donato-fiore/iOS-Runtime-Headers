// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUILEADINGVIEWCONTROLLER_H
#define SEARCHUILEADINGVIEWCONTROLLER_H

@class NSString, UIView;
@protocol SearchUIDetailedRowComponent, SearchUIFeedbackDelegate;

#import <Foundation/Foundation.h>

#import "SearchUIDetailedRowModel.h"

@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: feedbackDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel; // ivar: rowModel
@property (readonly) BOOL shouldCenterAlignToTitle;
@property (readonly) Class superclass;
@property (readonly) NSUInteger type;
@property (nonatomic) BOOL usesCompactWidth; // ivar: _usesCompactWidth
@property (retain, nonatomic) UIView *view; // ivar: _view


+(BOOL)supportsRowModel:(id)arg0 ;
+(Class)leadingViewClassForRowModel:(id)arg0 ;
-(BOOL)shouldVerticallyCenter;
-(id)imageView;
-(id)init;
-(id)setupView;
-(void)hide;
-(void)updateWithContacts:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif