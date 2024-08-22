// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKKEYVALUETABLEVIEWSETTINGSROW_H
#define PKKEYVALUETABLEVIEWSETTINGSROW_H

@class NSString;
@protocol PKTableViewSettingsRow;

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
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *value; // ivar: _value


+(id)cellReuseIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlight;
-(id)initWithTitle:(id)arg0 value:(id)arg1 ;
-(id)initWithTitle:(id)arg0 value:(id)arg1 sectionID:(id)arg2 ;
-(id)tableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif