// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPDOCUMENTUPDATEEVENTSTORE_H
#define VUIAPPDOCUMENTUPDATEEVENTSTORE_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface VUIAppDocumentUpdateEventStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor; // ivar: _eventByEventDescriptor
@property (readonly, copy, nonatomic) NSArray *events;


-(id)description;
-(id)init;
-(void)addEvent:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)removeAllEvents;
-(void)removeEvent:(id)arg0 ;


@end


#endif