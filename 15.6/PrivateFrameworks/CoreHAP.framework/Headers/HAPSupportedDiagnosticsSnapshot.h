// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPSUPPORTEDDIAGNOSTICSSNAPSHOT_H
#define HAPSUPPORTEDDIAGNOSTICSSNAPSHOT_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPDiagnosticsSnapshotAudioWrapper.h"
#import "HAPDiagnosticsSnapshotFormatWrapper.h"
#import "HAPDiagnosticsSnapshotOptionsWrapper.h"
#import "HAPDiagnosticsSnapshotTypeWrapper.h"

@interface HAPSupportedDiagnosticsSnapshot : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPDiagnosticsSnapshotAudioWrapper *audioDiagnostics; // ivar: _audioDiagnostics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPDiagnosticsSnapshotFormatWrapper *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPDiagnosticsSnapshotOptionsWrapper *options; // ivar: _options
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPDiagnosticsSnapshotTypeWrapper *type; // ivar: _type


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFormat:(id)arg0 type:(id)arg1 audioDiagnostics:(id)arg2 options:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif