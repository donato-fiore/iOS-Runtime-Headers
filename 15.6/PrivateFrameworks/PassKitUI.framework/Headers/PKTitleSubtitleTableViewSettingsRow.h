// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTITLESUBTITLETABLEVIEWSETTINGSROW_H
#define PKTITLESUBTITLETABLEVIEWSETTINGSROW_H

@class NSString;
@protocol PKTableViewSettingsRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKTitleSubtitleTableViewSettingsRow : NSObject <PKTableViewSettingsRow>



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
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(id)tableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif