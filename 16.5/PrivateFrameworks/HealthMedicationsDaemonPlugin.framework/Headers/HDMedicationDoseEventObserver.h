// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONDOSEEVENTOBSERVER_H
#define HDMEDICATIONDOSEEVENTOBSERVER_H

@class HDProfile, NSString;
@protocol HDDataObserver;

#import <Foundation/Foundation.h>


@interface HDMedicationDoseEventObserver : NSObject <HDDataObserver>

 {
    HDProfile *_profile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *samplesAddedDidRecheduleHandler; // ivar: _samplesAddedDidRecheduleHandler
@property (readonly) Class superclass;


-(BOOL)_rescheduleIfNecessaryWithDoseEvents:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_logDoseEventSamplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;


@end


#endif