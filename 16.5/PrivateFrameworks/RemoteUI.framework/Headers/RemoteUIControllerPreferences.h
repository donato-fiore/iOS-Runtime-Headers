// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMOTEUICONTROLLERPREFERENCES_H
#define REMOTEUICONTROLLERPREFERENCES_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface RemoteUIControllerPreferences : NSObject

@property (retain, nonatomic) UIImage *navBarImage; // ivar: _navBarImage
@property (retain, nonatomic) NSString *navBarImageLabel; // ivar: _navBarImageLabel
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (retain, nonatomic) NSString *spinnerLabel; // ivar: _spinnerLabel


-(id)initWithSpinner:(BOOL)arg0 ;
-(id)initWithSpinner:(BOOL)arg0 spinnerLabel:(id)arg1 ;
-(id)initWithSpinner:(BOOL)arg0 spinnerLabel:(id)arg1 navBarImage:(id)arg2 navBarImageLabel:(id)arg3 ;


@end


#endif