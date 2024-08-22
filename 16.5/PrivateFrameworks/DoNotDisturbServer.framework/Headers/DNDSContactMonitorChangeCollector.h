// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSCONTACTMONITORCHANGECOLLECTOR_H
#define DNDSCONTACTMONITORCHANGECOLLECTOR_H

@class NSSet, NSString, NSArray;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface DNDSContactMonitorChangeCollector : NSObject <CNChangeHistoryEventVisitor>

 {
    NSSet *_monitoredContactIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *deletedContactIdentifiers; // ivar: _deletedContactIdentifiers
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *updatedContacts; // ivar: _updatedContacts


-(id)initWithMonitoredContactIdentifiers:(id)arg0 ;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif