// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSOFTWAREUPDATEINFOITEM_H
#define HUSOFTWAREUPDATEINFOITEM_H

@class HFItem, NSSet, NSAttributedString, NSString;



@interface HUSoftwareUpdateInfoItem : HFItem

@property (readonly, nonatomic) NSSet *accessories; // ivar: _accessories
@property (retain, nonatomic) NSAttributedString *releaseNotesAttributedString; // ivar: _releaseNotesAttributedString
@property (retain, nonatomic) NSString *releaseNotesHTMLString; // ivar: _releaseNotesHTMLString


+(id)_dateFormatter;
+(id)_iconDescriptorForAccessories:(id)arg0 ;
-(id)_releaseNotesResultsFuture;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAccessories:(id)arg0 ;


@end


#endif