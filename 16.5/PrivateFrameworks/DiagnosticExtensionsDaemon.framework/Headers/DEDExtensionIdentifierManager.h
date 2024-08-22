// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDEXTENSIONIDENTIFIERMANAGER_H
#define DEDEXTENSIONIDENTIFIERMANAGER_H

@class NSString, NSMutableDictionary;
@protocol NSSecureCoding, DEDSecureArchiving;

#import <Foundation/Foundation.h>


@interface DEDExtensionIdentifierManager : NSObject <NSSecureCoding, DEDSecureArchiving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *identifierTable; // ivar: _identifierTable
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
+(id)log;
-(BOOL)isKnownIdentifier:(id)arg0 ;
-(id)allIdentifiers;
-(id)identifierForExtensionIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionIdentifiers:(id)arg0 ;
-(id)knownIdentifiersForExtensionIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;
-(void)revokeIdentifier:(id)arg0 ;


@end


#endif