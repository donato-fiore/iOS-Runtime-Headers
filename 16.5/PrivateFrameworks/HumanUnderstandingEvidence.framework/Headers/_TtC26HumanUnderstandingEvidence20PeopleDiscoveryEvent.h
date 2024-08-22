// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26HUMANUNDERSTANDINGEVIDENCE20PEOPLEDISCOVERYEVENT_H
#define _TTC26HUMANUNDERSTANDINGEVIDENCE20PEOPLEDISCOVERYEVENT_H

@protocol BMStoreData;

#import <Foundation/Foundation.h>


@interface _TtC26HumanUnderstandingEvidence20PeopleDiscoveryEvent : NSObject <BMStoreData>

 {
    ? peopleDiscovered;
}


@property (nonatomic, readonly) unsigned int dataVersion;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)init;
-(id)json;
-(id)serialize;


@end


#endif