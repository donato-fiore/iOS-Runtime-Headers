// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FSFCURAREINTERACTIONASJSONSTR_H
#define FSFCURAREINTERACTIONASJSONSTR_H

@class NSString;
@protocol FSFCurareInteraction;

#import <Foundation/Foundation.h>


@interface FSFCurareInteractionAsJsonStr : NSObject <FSFCurareInteraction>

 {
    NSString *_content;
    NSString *_interactionId;
    unsigned int _dataVersion;
}


@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, nonatomic) NSString *interactionId;


+(id)deserialize:(id)arg0 dataVersion:(unsigned int)arg1 interactionId:(id)arg2 ;
-(id)initWithJsonStr:(id)arg0 interactionId:(id)arg1 dataVersion:(unsigned int)arg2 ;
-(id)json;
-(id)serialize;


@end


#endif