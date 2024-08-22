// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIFAMILYMEMBERDOWNTIMECONTACTITEM_H
#define CNUIFAMILYMEMBERDOWNTIMECONTACTITEM_H

@class CNContact, NSString;

#import <Foundation/Foundation.h>


@interface CNUIFamilyMemberDowntimeContactItem : NSObject

@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) BOOL selected; // ivar: _selected


-(id)initWithContact:(id)arg0 label:(id)arg1 ;


@end


#endif