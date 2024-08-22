// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSTILEDESCRIPTOR_H
#define PKPASSTILEDESCRIPTOR_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "PKPassTileMetadata.h"

@interface PKPassTileDescriptor : NSObject

@property (nonatomic, getter=isDefaultEnabled) BOOL defaultEnabled; // ivar: _defaultEnabled
@property (copy, nonatomic) NSString *defaultStateIdentifier; // ivar: _defaultStateIdentifier
@property (retain, nonatomic) PKPassTileMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSDictionary *states; // ivar: _states


+(id)createWithFileURL:(id)arg0 ;
+(id)createWithPassDictionary:(id)arg0 privateDictionary:(id)arg1 ;
-(id)_init;
-(id)createTileForState:(id)arg0 withBundle:(id)arg1 privateBundle:(id)arg2 ;
-(id)init;


@end


#endif