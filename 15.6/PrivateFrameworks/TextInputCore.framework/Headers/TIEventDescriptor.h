// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIEVENTDESCRIPTOR_H
#define TIEVENTDESCRIPTOR_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TIEventDescriptor : NSObject

@property (readonly, nonatomic) NSString *eventDescription; // ivar: _eventDescription
@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly, nonatomic) NSArray *fieldDescriptors; // ivar: _fieldDescriptors
@property (readonly, nonatomic) BOOL includeTestingParameters; // ivar: _includeTestingParameters


+(id)eventDescriptorWithEventName:(id)arg0 eventDescription:(id)arg1 fieldDescriptors:(id)arg2 includeTestingParameters:(BOOL)arg3 ;
-(id)initWithEventName:(id)arg0 eventDescription:(id)arg1 fieldDescriptors:(id)arg2 includeTestingParameters:(BOOL)arg3 ;


@end


#endif