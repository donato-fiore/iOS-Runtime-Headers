// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSLOGCOLLECTIONREFERENCE_H
#define _OSLOGCOLLECTIONREFERENCE_H


#import <Foundation/Foundation.h>

#import "_OSLogDirectoryReference.h"

@interface _OSLogCollectionReference : NSObject

@property (readonly, nonatomic) _OSLogDirectoryReference *UUIDTextReference; // ivar: _UUIDTextReference
@property (readonly, nonatomic) _OSLogDirectoryReference *diagnosticsDirectoryReference; // ivar: _diagnosticsDirectoryReference
@property (readonly, nonatomic) _OSLogDirectoryReference *timesyncReference; // ivar: _timesyncReference


+(id)localDBRefWithError:(*id)arg0 ;
+(id)referenceWithURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithDiagnosticsDirectory:(id)arg0 timesyncDirectory:(id)arg1 UUIDTextDirectory:(id)arg2 ;
-(void)close;


@end


#endif