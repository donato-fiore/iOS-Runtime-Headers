// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSWITCHTABLEVIEWSETTINGSROW_H
#define PKSWITCHTABLEVIEWSETTINGSROW_H

@class NSString;
@protocol PKTableViewSettingsRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKSwitchTableViewSettingsRow : NSObject <PKTableViewSettingsRow>



@property (copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *value; // ivar: _value


+(id)cellReuseIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlight;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 value:(BOOL)arg2 changeHandler:(id)arg3 ;
-(id)tableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_switchValueChanged:(id)arg0 ;


@end


#endif