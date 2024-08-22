// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNODEINPUT_H
#define BWNODEINPUT_H

@class NSMutableDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "BWNodeConnection.h"
#import "BWFormat.h"
#import "BWFormatRequirements.h"
#import "BWNode.h"
#import "BWNodeInputMediaConfiguration.h"
#import "BWNodeInputMediaProperties.h"
#import "BWVideoFormat.h"

@interface BWNodeInput : NSObject {
    NSMutableDictionary *_attachedMediaConfigurations;
    NSMutableDictionary *_attachedMediaProperties;
}


@property (nonatomic) NSInteger configurationID; // ivar: _configurationID
@property (nonatomic) BWNodeConnection *connection; // ivar: _connection
@property (nonatomic) BOOL conversionToPassthroughModeNeverAllowed;
@property (nonatomic) int delayedBufferCount;
@property (nonatomic) BOOL discardsSampleDataTaggedToBeDropped; // ivar: _discardsSampleDataTaggedToBeDropped
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) BWFormat *format;
@property (retain, nonatomic) BWFormatRequirements *formatRequirements;
@property (nonatomic) int indefinitelyHeldBufferCount;
@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) NSInteger liveConfigurationID; // ivar: _liveConfigurationID
@property (readonly, nonatomic) BWFormat *liveFormat;
@property (readonly, nonatomic) unsigned int mediaType; // ivar: _mediaType
@property (readonly, nonatomic) BOOL mediaTypeIsPointCloud; // ivar: _mediaTypeIsPointCloud
@property (readonly, nonatomic) BOOL mediaTypeIsVideo; // ivar: _mediaTypeIsVideo
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BWNode *node; // ivar: _node
@property (readonly, nonatomic) unsigned int numberOfBuffersDropped; // ivar: _numberOfBuffersDropped
@property (readonly, nonatomic) unsigned int numberOfBuffersReceived; // ivar: _numberOfBuffersReceived
@property (nonatomic) int passthroughMode;
@property (readonly, nonatomic) BWNodeInputMediaConfiguration *primaryMediaConfiguration; // ivar: _primaryMediaConfiguration
@property (readonly, nonatomic) BWNodeInputMediaProperties *primaryMediaProperties; // ivar: _primaryMediaProperties
@property (readonly, nonatomic) NSArray *resolvedAttachedMediaKeys;
@property (nonatomic) int retainedBufferCount;
@property (readonly, nonatomic) NSArray *specifiedAttachedMediaKeys;
@property (retain, nonatomic) BWNodeInputMediaConfiguration *unspecifiedAttachedMediaConfiguration; // ivar: _unspecifiedAttachedMediaConfiguration
@property (readonly, nonatomic) BWVideoFormat *videoFormat;


+(struct opaqueCMSampleBuffer *)newSampleDataToBeDroppedMarkerBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
+(void)initialize;
-(id)description;
-(id)initWithMediaType:(unsigned int)arg0 node:(id)arg1 ;
-(id)initWithMediaType:(unsigned int)arg0 node:(id)arg1 index:(NSUInteger)arg2 ;
-(id)mediaConfigurationForAttachedMediaKey:(id)arg0 ;
-(id)mediaPropertiesForAttachedMediaKey:(id)arg0 ;
-(int)_passthroughModeForAttachedMediaKey:(id)arg0 ;
-(void)_clearAllMediaProperties;
-(void)_setMediaProperties:(id)arg0 forAttachedMediaKey:(id)arg1 ;
-(void)dealloc;
-(void)handleMessage:(id)arg0 ;
-(void)invalidate;
-(void)setMediaConfiguration:(id)arg0 forAttachedMediaKey:(id)arg1 ;


@end


#endif