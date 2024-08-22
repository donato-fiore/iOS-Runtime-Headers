// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEVENT_H
#define WFEVENT_H


#import <Foundation/Foundation.h>


@interface WFEvent : NSObject



+(Class)codableEventClass;
+(id)serializablePropertyTransformers;
-(Class)codableEventClass;
-(id)coreAnalyticsKey;
-(id)debugDescription;
-(id)description;
-(id)dictionaryRepresentation;
-(id)propertyNames;
-(id)serializableEvent;
-(void)track;
-(void)trackWithCount:(int)arg0 ;


@end


#endif