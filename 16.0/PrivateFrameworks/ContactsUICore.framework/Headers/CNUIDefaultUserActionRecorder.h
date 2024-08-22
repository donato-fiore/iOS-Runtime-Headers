// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIDEFAULTUSERACTIONRECORDER_H
#define CNUIDEFAULTUSERACTIONRECORDER_H

@class NSString, CRRecentContactsLibrary;
@protocol CNUIUserActionRecorder, CNUIDefaultUserActionRecorderEventFactory;

#import <Foundation/Foundation.h>


@interface CNUIDefaultUserActionRecorder : NSObject <CNUIUserActionRecorder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CNUIDefaultUserActionRecorderEventFactory> *eventFactory; // ivar: _eventFactory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CRRecentContactsLibrary *library; // ivar: _library
@property (readonly) Class superclass;


-(id)init;
-(id)initWithRecentsLibrary:(id)arg0 eventFactory:(id)arg1 ;
-(void)recordUserAction:(id)arg0 ;


@end


#endif