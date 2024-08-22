// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXEXTENSIONPOINTCATALOG_H
#define EXEXTENSIONPOINTCATALOG_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface EXExtensionPointCatalog : NSObject

@property (readonly) NSDictionary *extensionPointByIdentifierPlatform; // ivar: _extensionPointByIdentifierPlatform


-(id)extensionPointForIdentifier:(id)arg0 ;
-(id)extensionPointForIdentifier:(id)arg0 platform:(unsigned int)arg1 ;
-(id)init;
-(id)initWithEnumerator:(id)arg0 ;


@end


#endif