// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDEXTENSION_H
#define DEDEXTENSION_H

@class NSString;
@protocol DEDSecureArchiving, NSCopying;

#import <Foundation/Foundation.h>

#import "DEDExtensionIdentifier.h"

@interface DEDExtension : NSObject <DEDSecureArchiving, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (retain) DEDExtensionIdentifier *dedExtensionIdentifier; // ivar: _dedExtensionIdentifier
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)archivedClasses;
+(id)extensionWithDEExtension:(id)arg0 ;
+(id)extensionWithDicionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serialize;


@end


#endif