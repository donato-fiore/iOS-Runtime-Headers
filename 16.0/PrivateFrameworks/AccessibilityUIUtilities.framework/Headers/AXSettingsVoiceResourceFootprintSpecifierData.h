// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSETTINGSVOICERESOURCEFOOTPRINTSPECIFIERDATA_H
#define AXSETTINGSVOICERESOURCEFOOTPRINTSPECIFIERDATA_H

@class AXDialectMap, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AXSettingsVoiceResourceFootprintSpecifierData : NSObject

@property (retain, nonatomic) AXDialectMap *dialect; // ivar: _dialect
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *resources; // ivar: _resources
@property (nonatomic) BOOL showListItemStyle; // ivar: _showListItemStyle


-(id)description;


@end


#endif