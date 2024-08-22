// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSAUDIOBOOKREFERENCEOBJECT_H
#define NMSAUDIOBOOKREFERENCEOBJECT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface NMSAudiobookReferenceObject : NSObject

@property (readonly, nonatomic) NSNumber *audiobookIdentifier; // ivar: _audiobookIdentifier
@property (nonatomic) NSUInteger downloadLimit; // ivar: _downloadLimit


-(BOOL)isEqual:(id)arg0 ;
-(id)audiobookMediaItem;
-(id)description;
-(id)initWithAudiobookIdentifier:(id)arg0 downloadLimit:(NSUInteger)arg1 ;


@end


#endif