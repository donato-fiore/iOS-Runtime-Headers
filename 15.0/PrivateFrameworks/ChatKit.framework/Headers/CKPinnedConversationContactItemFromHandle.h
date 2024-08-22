// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPINNEDCONVERSATIONCONTACTITEMFROMHANDLE_H
#define CKPINNEDCONVERSATIONCONTACTITEMFROMHANDLE_H

@class NSString;
@protocol CKPinnedConversationContactItem;

#import <Foundation/Foundation.h>

#import "CKEntity.h"

@interface CKPinnedConversationContactItemFromHandle : NSObject <CKPinnedConversationContactItem>



@property (nonatomic) NSInteger contactItemAlignment; // ivar: _contactItemAlignment
@property (readonly, nonatomic) NSString *contactItemIdentifier;
@property (nonatomic) CGFloat contentScale; // ivar: _contentScale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKEntity *entity; // ivar: _entity
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cnContactWithKeys:(id)arg0 ;
-(id)contactItemView;
-(id)initWithEntity:(id)arg0 ;


@end


#endif