// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MXEXTENSIONCONTAININGAPPPROXY_H
#define _MXEXTENSIONCONTAININGAPPPROXY_H

@class NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _MXExtensionContainingAppProxy : NSObject

@property (readonly, copy, nonatomic) NSString *containingAppIdentifer; // ivar: _containingAppIdentifer
@property (retain, nonatomic) NSMutableSet *extensionNonUIIdentifiers; // ivar: _extensionNonUIIdentifiers
@property (retain, nonatomic) NSMutableSet *extensionUIIdentifiers; // ivar: _extensionUIIdentifiers


-(id)initWithContainingAppIdentifer:(id)arg0 ;


@end


#endif