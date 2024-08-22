// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FSFCURAREINTERACTIONASDICT_H
#define FSFCURAREINTERACTIONASDICT_H

@class NSDictionary, NSString;
@protocol FSFCurareInteraction;

#import <Foundation/Foundation.h>


@interface FSFCurareInteractionAsDict : NSObject <FSFCurareInteraction>

 {
    NSDictionary *_content;
    NSString *_interactionId;
    unsigned int _dataVersion;
}


@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, nonatomic) NSString *interactionId;


+(id)deserialize:(id)arg0 dataVersion:(unsigned int)arg1 interactionId:(id)arg2 ;
-(id)initWithContent:(id)arg0 interactionId:(id)arg1 dataVersion:(unsigned int)arg2 ;
-(id)initWithData:(id)arg0 dataVersion:(unsigned int)arg1 interactionId:(id)arg2 ;
-(id)json;
-(id)serialize;


@end


#endif