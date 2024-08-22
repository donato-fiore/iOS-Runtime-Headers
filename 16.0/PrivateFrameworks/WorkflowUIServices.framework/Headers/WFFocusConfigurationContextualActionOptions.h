// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFOCUSCONFIGURATIONCONTEXTUALACTIONOPTIONS_H
#define WFFOCUSCONFIGURATIONCONTEXTUALACTIONOPTIONS_H

@class WFContextualAction, NSArray;

#import <Foundation/Foundation.h>


@interface WFFocusConfigurationContextualActionOptions : NSObject

@property (readonly, nonatomic) WFContextualAction *contextualAction; // ivar: _contextualAction
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSArray *footerButtons; // ivar: _footerButtons
@property (readonly, nonatomic) BOOL showsEnablementButton; // ivar: _showsEnablementButton


-(id)initWithContextualAction:(id)arg0 ;
-(id)initWithContextualAction:(id)arg0 footerButtons:(id)arg1 ;
-(id)initWithContextualAction:(id)arg0 footerButtons:(id)arg1 showsEnablementButton:(BOOL)arg2 isEnabled:(BOOL)arg3 ;


@end


#endif