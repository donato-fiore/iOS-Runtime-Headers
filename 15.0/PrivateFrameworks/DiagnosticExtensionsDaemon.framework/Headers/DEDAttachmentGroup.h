// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEDATTACHMENTGROUP_H
#define DEDATTACHMENTGROUP_H

@class NSArray, NSString, NSURL;
@protocol DEDSecureArchiving;

#import <Foundation/Foundation.h>

#import "DEDExtensionIdentifier.h"
#import "DEDBugSession.h"

@interface DEDAttachmentGroup : NSObject <DEDSecureArchiving>



@property (retain) NSArray *attachmentItems; // ivar: _attachmentItems
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) DEDExtensionIdentifier *dedExtensionIdentifier; // ivar: _dedExtensionIdentifier
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceID; // ivar: _deviceID
@property (retain) NSString *displayName; // ivar: _displayName
@property (retain) NSString *extensionID; // ivar: _extensionID
@property (retain) DEDBugSession *fromBugSession; // ivar: _fromBugSession
@property (readonly) NSUInteger hash;
@property (retain) NSURL *rootURL; // ivar: _rootURL
@property (readonly) Class superclass;


+(id)archivedClasses;
+(id)groupWithDEGroup:(id)arg0 identifier:(id)arg1 ;
+(id)groupWithDictionary:(id)arg0 ;
-(BOOL)isLocal;
-(id)archiveName;
-(id)serialize;
-(id)totalFilesize;


@end


#endif