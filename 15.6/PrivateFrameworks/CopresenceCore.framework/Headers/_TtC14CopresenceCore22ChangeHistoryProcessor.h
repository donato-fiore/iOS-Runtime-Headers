// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC14COPRESENCECORE22CHANGEHISTORYPROCESSOR_H
#define _TTC14COPRESENCECORE22CHANGEHISTORYPROCESSOR_H

@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface _TtC14CopresenceCore22ChangeHistoryProcessor : NSObject <CNChangeHistoryEventVisitor>

 {
    ? onContactDeleted;
}




-(id)init;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif