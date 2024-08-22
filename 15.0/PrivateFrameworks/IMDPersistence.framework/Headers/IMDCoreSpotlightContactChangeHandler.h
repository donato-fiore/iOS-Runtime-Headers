// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCORESPOTLIGHTCONTACTCHANGEHANDLER_H
#define IMDCORESPOTLIGHTCONTACTCHANGEHANDLER_H

@class NSString;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface IMDCoreSpotlightContactChangeHandler : NSObject <CNChangeHistoryEventVisitor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif