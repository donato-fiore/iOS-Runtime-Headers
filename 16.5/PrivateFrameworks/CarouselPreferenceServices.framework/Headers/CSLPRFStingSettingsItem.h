// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFSTINGSETTINGSITEM_H
#define CSLPRFSTINGSETTINGSITEM_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CSLPRFStingSettingsItem : NSObject

@property (copy, nonatomic) NSNumber *actionType; // ivar: _actionType
@property (copy, nonatomic) NSString *assetName; // ivar: _assetName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 actionType:(id)arg2 assetName:(id)arg3 ;


@end


#endif