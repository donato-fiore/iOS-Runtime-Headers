// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSSYNTHESIZEDEXTENSIONPOINTRECORD_H
#define _LSSYNTHESIZEDEXTENSIONPOINTRECORD_H

@class NSString;


#import "LSExtensionPointRecord.h"

@interface _LSSynthesizedExtensionPointRecord : LSExtensionPointRecord {
    NSString *_identifier;
}




+(BOOL)supportsSecureCoding;
-(id)SDKDictionary;
-(id)_initWithContext:(struct LSContext *)arg0 persistentIdentifierData:(struct LSPersistentIdentifierData *)arg1 length:(NSUInteger)arg2 ;
-(id)_persistentIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)name;
-(id)version;
-(unsigned int)platform;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif