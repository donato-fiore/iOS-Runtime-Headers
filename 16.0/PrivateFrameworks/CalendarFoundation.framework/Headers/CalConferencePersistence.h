// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCONFERENCEPERSISTENCE_H
#define CALCONFERENCEPERSISTENCE_H


#import <Foundation/Foundation.h>


@interface CalConferencePersistence : NSObject



+(id)_htmlSerializedConference:(id)arg0 serializationBlockTitle:(id)arg1 ;
+(id)_knownPersistenceFormats;
+(id)deserializeConference:(id)arg0 ;
+(id)serializeConference:(id)arg0 serializationBlockTitle:(id)arg1 ;
+(id)updateHTML:(id)arg0 withEventNotes:(id)arg1 ;


@end


#endif