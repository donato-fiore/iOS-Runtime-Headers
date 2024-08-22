// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCSHORTCUT_H
#define FCSHORTCUT_H

@class CKRecord, NSDate, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface FCShortcut : NSObject

@property (readonly, nonatomic) CKRecord *asCKRecord;
@property (readonly, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSNumber *order; // ivar: _order
@property (readonly, nonatomic) NSUInteger shortcutType; // ivar: _shortcutType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 dateAdded:(id)arg1 order:(id)arg2 shortcutType:(NSUInteger)arg3 ;


@end


#endif