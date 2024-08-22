// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTHEADERVIEWCONTROLLER_H
#define CKTRANSCRIPTHEADERVIEWCONTROLLER_H

@class UIViewController;


#import "CKConversation.h"

@interface CKTranscriptHeaderViewController : UIViewController

@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, nonatomic) BOOL shouldInvalidateOnAddressBookChange; // ivar: _shouldInvalidateOnAddressBookChange


-(id)initWithConversation:(id)arg0 ;


@end


#endif