// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSUGGESTEDRECIPIENTITEM_H
#define CNSUGGESTEDRECIPIENTITEM_H

@class NSMutableSet, NSString;

#import <Foundation/Foundation.h>

#import "CNComposeRecipient.h"

@interface CNSuggestedRecipientItem : NSObject

@property (retain, nonatomic) NSMutableSet *handles; // ivar: _handles
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (retain, nonatomic) CNComposeRecipient *recipient; // ivar: _recipient
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)os_log;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSelectedForHandles:(id)arg0 ;
-(BOOL)shouldDeselectForHandles:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRecipient:(id)arg0 ;
-(void)loadHandles;


@end


#endif