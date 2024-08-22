// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCOMPOSERECIPIENTSELECTIONSNAPSHOT_H
#define PXCOMPOSERECIPIENTSELECTIONSNAPSHOT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXComposeRecipientSelectionSnapshot : NSObject

@property (readonly, copy, nonatomic) NSArray *selectedComposeRecipients; // ivar: _selectedComposeRecipients
@property (readonly, copy, nonatomic) NSArray *selectedRecipients; // ivar: _selectedRecipients


-(id)init;
-(id)initWithSelectedComposeRecipients:(id)arg0 selectedRecipients:(id)arg1 ;


@end


#endif