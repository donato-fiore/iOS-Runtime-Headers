// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDSTREAM_H
#define ASDSTREAM_H

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;


#import "ASDObject.h"
#import "ASDStreamFormat.h"

@interface ASDStream : ASDObject {
    ASDStreamFormat *_physicalFormat;
    NSArray *_physicalFormats;
    NSObject<OS_dispatch_queue> *_physicalFormatQueue;
    NSMutableArray *_controls;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSString *_streamName;
    unsigned int _latency;
    BOOL _isTapStream;
    id *_readInputBlockUnretained;
    id *_convertInputBlockUnretained;
    id *_processInputBlockUnretained;
    id *_processOutputBlockUnretained;
    id *_mixOutputBlockUnretained;
    id *_processMixBlockUnretained;
    id *_convertMixBlockUnretained;
    id *_writeMixBlockUnretained;
}


@property (copy, nonatomic) id *convertInputBlock; // ivar: _convertInputBlock
@property (readonly, nonatomic) *id convertInputBlockUnretainedPtr;
@property (copy, nonatomic) id *convertMixBlock; // ivar: _convertMixBlock
@property (readonly, nonatomic) *id convertMixBlockUnretainedPtr;
@property (nonatomic) unsigned int direction; // ivar: _direction
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isTapStream;
@property (nonatomic) unsigned int latency;
@property (copy, nonatomic) id *mixOutputBlock; // ivar: _mixOutputBlock
@property (readonly, nonatomic) *id mixOutputBlockUnretainedPtr;
@property (copy, nonatomic) ASDStreamFormat *physicalFormat;
@property (nonatomic, getter=isPhysicalFormatSettable) BOOL physicalFormatSettable; // ivar: _physicalFormatSettable
@property (copy, nonatomic) NSArray *physicalFormats;
@property (copy, nonatomic) id *processInputBlock; // ivar: _processInputBlock
@property (readonly, nonatomic) *id processInputBlockUnretainedPtr;
@property (copy, nonatomic) id *processMixBlock; // ivar: _processMixBlock
@property (readonly, nonatomic) *id processMixBlockUnretainedPtr;
@property (copy, nonatomic) id *processOutputBlock; // ivar: _processOutputBlock
@property (readonly, nonatomic) *id processOutputBlockUnretainedPtr;
@property (copy, nonatomic) id *readInputBlock; // ivar: _readInputBlock
@property (readonly, nonatomic) *id readInputBlockUnretainedPtr;
@property (nonatomic) unsigned int startingChannel; // ivar: _startingChannel
@property (copy, nonatomic) NSString *streamName;
@property (nonatomic) unsigned int terminalType; // ivar: _terminalType
@property (copy, nonatomic) id *writeMixBlock; // ivar: _writeMixBlock
@property (readonly, nonatomic) *id writeMixBlockUnretainedPtr;


-(BOOL)changePhysicalFormat:(id)arg0 ;
-(BOOL)deviceChangedToSamplingRate:(CGFloat)arg0 ;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(id)channelCategoryForChannelIndex:(unsigned int)arg0 ;
-(id)channelNameForChannelIndex:(unsigned int)arg0 ;
-(id)channelNumberForChannelIndex:(unsigned int)arg0 ;
-(id)controls;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)initWithDirection:(unsigned int)arg0 withPlugin:(id)arg1 ;
-(id)initWithPlugin:(id)arg0 ;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;
-(unsigned int)scope;
-(void)addControl:(id)arg0 ;
-(void)addPhysicalFormat:(id)arg0 ;
-(void)removeControl:(id)arg0 ;
-(void)removePhysicalFormat:(id)arg0 ;
-(void)startStream;
-(void)stopStream;


@end


#endif