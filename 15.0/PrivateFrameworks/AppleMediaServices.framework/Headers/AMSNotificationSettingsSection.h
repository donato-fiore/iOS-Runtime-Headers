// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSNOTIFICATIONSETTINGSSECTION_H
#define AMSNOTIFICATIONSETTINGSSECTION_H

@class NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AMSNotificationSettingsSection : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTitle:(id)arg0 footer:(id)arg1 items:(id)arg2 ;


@end


#endif