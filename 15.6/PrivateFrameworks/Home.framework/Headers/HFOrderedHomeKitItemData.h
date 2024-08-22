// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFORDEREDHOMEKITITEMDATA_H
#define HFORDEREDHOMEKITITEMDATA_H

@class NSString, NSDate, NSUUID;

#import <Foundation/Foundation.h>


@interface HFOrderedHomeKitItemData : NSObject

@property (copy, nonatomic) NSString *actionSetType; // ivar: _actionSetType
@property (copy, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)dataWithUniqueIdentifier:(id)arg0 title:(id)arg1 dateAdded:(id)arg2 ;


@end


#endif