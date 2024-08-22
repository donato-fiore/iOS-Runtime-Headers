// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTCARDFIELDSECTION_H
#define CNCONTACTCARDFIELDSECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CNContactCardFieldSection : NSObject

@property (readonly, nonatomic) NSString *displayTitle; // ivar: _displayTitle
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSString *sectionType; // ivar: _sectionType


-(id)initWithSectionType:(id)arg0 items:(id)arg1 ;
-(id)initWithSectionType:(id)arg0 items:(id)arg1 displayTitle:(id)arg2 ;


@end


#endif