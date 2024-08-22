// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKKEYVALUETABLEVIEWSETTINGSROW_H
#define PKKEYVALUETABLEVIEWSETTINGSROW_H

@class NSString, UIColor;
@protocol PKTableViewSettingsRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKKeyValueTableViewSettingsRow : NSObject <PKTableViewSettingsRow>

 {
    NSString *_sectionID;
}


@property (copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (copy, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (copy, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *value; // ivar: _value


+(id)cellReuseIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlight;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 value:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 value:(id)arg2 sectionID:(id)arg3 ;
-(id)tableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif