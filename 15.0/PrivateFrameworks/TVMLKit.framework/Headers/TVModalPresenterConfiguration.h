// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVMODALPRESENTERCONFIGURATION_H
#define TVMODALPRESENTERCONFIGURATION_H

@class NSString, UIView;

#import <Foundation/Foundation.h>


@interface TVModalPresenterConfiguration : NSObject

@property (nonatomic) BOOL allowsMenuDismissal; // ivar: _allowsMenuDismissal
@property (nonatomic) BOOL allowsModalOverModal; // ivar: _allowsModalOverModal
@property (copy, nonatomic) NSString *barButtonID; // ivar: _barButtonID
@property (nonatomic) NSUInteger configurationType; // ivar: _configurationType
@property (nonatomic) CGSize formSheetSize; // ivar: _formSheetSize
@property (nonatomic) BOOL navigationBarHidden; // ivar: _navigationBarHidden
@property (nonatomic) CGSize popoverSize; // ivar: _popoverSize
@property (nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView


-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)_configureWithDictionary:(id)arg0 ;


@end


#endif