// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSTARKCONVERSATIONCONTROLLER_H
#define CKSTARKCONVERSATIONCONTROLLER_H

@class CPListTemplate, NSDateFormatter, NSString, CPInterfaceController;
@protocol CPInterfaceControllerDelegate;

#import <Foundation/Foundation.h>


@interface CKStarkConversationController : NSObject <CPInterfaceControllerDelegate>



@property (retain, nonatomic) CPListTemplate *conversationListTemplate; // ivar: _conversationListTemplate
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPInterfaceController *interfaceController; // ivar: _interfaceController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDateFormatter *timeFormatter; // ivar: _timeFormatter


-(id)initWithInterfaceController:(id)arg0 ;
-(void)_resortAndReloadData;
-(void)conversationListDidChange:(id)arg0 ;
-(void)templateWillAppear:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif