// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTEXTPRESETDISPLAYITEM_H
#define TSWPTEXTPRESETDISPLAYITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSWPTextStylePreset.h"

@interface TSWPTextPresetDisplayItem : NSObject

@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) TSWPTextStylePreset *preset; // ivar: _preset


-(id)description;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithPreset:(id)arg0 displayName:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif