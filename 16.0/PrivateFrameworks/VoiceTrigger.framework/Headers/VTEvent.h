// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTEVENT_H
#define VTEVENT_H

@class NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface VTEvent : NSObject

@property (readonly, nonatomic) NSURL *jsonFileUrl; // ivar: _jsonFileUrl
@property (readonly, nonatomic) NSDictionary *voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo


+(NSInteger)eventTypeFromURL:(id)arg0 ;
+(id)eventFromURL:(id)arg0 ;
-(id)_buildContent;
-(id)_buildDetail;
-(id)_buildTitle;
-(id)_buildTriggerContent;
-(id)_buildTriggerDetail;
-(id)_getFloatStringFromVTEventWithKey:(id)arg0 decimal:(BOOL)arg1 ;
-(id)_packAudioContent:(id)arg0 filepath:(id)arg1 ;
-(id)_packAudioURLFromVTEventInfo:(id)arg0 key:(id)arg1 ;
-(id)_packBooleanFromVTEventInfo:(id)arg0 key:(id)arg1 ;
-(id)_packStringContent:(id)arg0 value:(id)arg1 ;
-(id)_packStringFromVTEventInfo:(id)arg0 key:(id)arg1 ;
-(id)eventTrackerDictionary;
-(id)initWithEventLogURL:(id)arg0 ;
-(id)jsonFileName;
-(id)timestampString;
-(void)_readJsonFile:(id)arg0 ;


@end


#endif