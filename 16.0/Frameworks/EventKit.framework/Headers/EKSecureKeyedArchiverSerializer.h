// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKSECUREKEYEDARCHIVERSERIALIZER_H
#define EKSECUREKEYEDARCHIVERSERIALIZER_H

@class NSString;
@protocol EKSerializer;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKSecureKeyedArchiverSerializer : NSObject <EKSerializer>



@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly, nonatomic) NSString *version; // ivar: _version


-(id)deserializeData:(id)arg0 isNew:(*id)arg1 error:(*id)arg2 ;
-(id)initWithEventStore:(id)arg0 withVersion:(id)arg1 ;
-(id)serializeEvent:(id)arg0 error:(*id)arg1 ;
-(id)versionFromData:(id)arg0 error:(*id)arg1 ;


@end


#endif