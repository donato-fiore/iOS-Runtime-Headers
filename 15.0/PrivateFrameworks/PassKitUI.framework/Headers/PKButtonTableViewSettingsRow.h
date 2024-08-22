// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBUTTONTABLEVIEWSETTINGSROW_H
#define PKBUTTONTABLEVIEWSETTINGSROW_H

@class NSString;
@protocol PKTableViewSettingsRow;

#import <Foundation/Foundation.h>


@interface PKButtonTableViewSettingsRow : NSObject <PKTableViewSettingsRow>



@property (copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *value; // ivar: _value


+(id)cellReuseIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlight;
-(id)initWithTitle:(id)arg0 tapHandler:(id)arg1 ;
-(id)tableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)handleCellSelection;


@end


#endif