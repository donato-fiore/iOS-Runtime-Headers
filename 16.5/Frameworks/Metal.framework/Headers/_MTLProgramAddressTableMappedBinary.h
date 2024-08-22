// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLPROGRAMADDRESSTABLEMAPPEDBINARY_H
#define _MTLPROGRAMADDRESSTABLEMAPPEDBINARY_H

@class NSString;
@protocol MTLProgramAddressTableMappedBinary;

#import <Foundation/Foundation.h>


@interface _MTLProgramAddressTableMappedBinary : NSObject <MTLProgramAddressTableMappedBinary>



@property (readonly) NSUInteger binaryUniqueId; // ivar: _binaryUniqueId
@property (readonly) NSUInteger mappedAddress; // ivar: _mappedAddress
@property (readonly) NSUInteger mappedSize; // ivar: _mappedSize
@property (readonly) NSString *type; // ivar: _type


-(id)initWithMappedAddress:(NSUInteger)arg0 mappedSize:(NSUInteger)arg1 binaryUniqueId:(NSUInteger)arg2 ;
-(id)initWithMappedAddress:(NSUInteger)arg0 mappedSize:(NSUInteger)arg1 binaryUniqueId:(NSUInteger)arg2 type:(id)arg3 ;


@end


#endif