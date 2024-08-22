// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFLOWDIVERTFILEHANDLE_H
#define NEFLOWDIVERTFILEHANDLE_H

@class NSNumber, NSData;


#import "NEFileHandle.h"

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit; // ivar: _controlUnit
@property (readonly) NSData *keyMaterial; // ivar: _keyMaterial


-(NSUInteger)type;
-(id)description;
-(id)dictionary;
-(id)getUnitForSocket:(int)arg0 ;
-(id)initFlowDivertControlSocket;
-(id)initFlowDivertControlSocketDisableAppMap:(BOOL)arg0 ;
-(id)initFlowDivertDataSocket;
-(id)initFromDictionary:(id)arg0 ;


@end


#endif