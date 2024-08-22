// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEDEXTENSIONIDENTIFIER_H
#define DEDEXTENSIONIDENTIFIER_H

@class NSString;
@protocol DEDSecureArchiving, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DEDExtensionIdentifier : NSObject <DEDSecureArchiving, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly) NSUInteger hash;
@property NSInteger invocationNumber; // ivar: _invocationNumber
@property (readonly) NSString *stringValue;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
+(id)log;
+(id)parseDEDIdentifierString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionIdentifier:(id)arg0 invocationNumber:(NSInteger)arg1 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif