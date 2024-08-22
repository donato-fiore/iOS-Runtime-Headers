// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLENAMEPICKERITEM_H
#define PXPEOPLENAMEPICKERITEM_H

@class CNContact, PHPerson, NSAttributedString;

#import <Foundation/Foundation.h>


@interface PXPeopleNamePickerItem : NSObject

@property (readonly) CNContact *contact; // ivar: _contact
@property (readonly) PHPerson *person; // ivar: _person
@property (readonly) NSAttributedString *subtitle; // ivar: _subtitle
@property (readonly) NSAttributedString *title; // ivar: _title


-(id)initWithContact:(id)arg0 searchPrefix:(id)arg1 ;
-(id)initWithPerson:(id)arg0 searchPrefix:(id)arg1 ;


@end


#endif