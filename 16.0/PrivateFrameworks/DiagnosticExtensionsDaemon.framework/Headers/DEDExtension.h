// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
@property (retain) NSString *localizedConsentText; // ivar: _localizedConsentText
@property (retain) NSString *localizedDataCollectedExplanation; // ivar: _localizedDataCollectedExplanation
@property (retain) NSString *localizedDataCollectedSummary; // ivar: _localizedDataCollectedSummary
@property (retain) NSString *name; // ivar: _name
@property (nonatomic) BOOL requiresDataClassBAccessToRun; // ivar: _requiresDataClassBAccessToRun
@property (readonly) Class superclass;


+(id)archivedClasses;
+(id)extensionWithDEExtension:(id)arg0 ;
+(id)extensionWithDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serialize;


@end


#endif