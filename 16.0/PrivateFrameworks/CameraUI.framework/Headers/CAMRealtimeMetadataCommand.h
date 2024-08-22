// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMREALTIMEMETADATACOMMAND_H
#define CAMREALTIMEMETADATACOMMAND_H

@class NSArray;


#import "CAMCaptureCommand.h"

@interface CAMRealtimeMetadataCommand : CAMCaptureCommand

@property (readonly, copy, nonatomic) NSArray *_desiredTypes; // ivar: __desiredTypes


-(id)_metadataObjectTypeForRealtimeMetadataType:(NSInteger)arg0 ;
-(id)_metadataObjectTypesForRealtimeMetadataTypes:(id)arg0 withAvailableMetadataTypes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif