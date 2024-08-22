// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASASTREAM_H
#define ASASTREAM_H

@class NSArray, NSString;


#import "ASAObject.h"
#import "ASAAudioFormat.h"

@interface ASAStream : ASAObject

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSArray *availablePhysicalFormats;
@property (readonly, copy, nonatomic) NSArray *availableVirtualFormats;
@property (readonly, copy, nonatomic) NSArray *controlObjectIDs;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, nonatomic, getter=isInput) BOOL input;
@property (readonly, nonatomic) unsigned int latency;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isOutput) BOOL output;
@property (copy, nonatomic) ASAAudioFormat *physicalFormat;
@property (readonly, nonatomic, getter=isPhysicalFormatSettable) BOOL physicalFormatSettable;
@property (readonly, nonatomic) unsigned int startingChannel;
@property (readonly, nonatomic) unsigned int terminalType;
@property (copy, nonatomic) ASAAudioFormat *virtualFormat;
@property (readonly, nonatomic, getter=isVirtualFormatSettable) BOOL virtualFormatSettable;


-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;


@end


#endif