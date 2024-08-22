// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDATTACHMENTITEM_H
#define DEDATTACHMENTITEM_H

@class NSURL, NSString, NSNumber, NSDate;
@protocol DEDSecureArchiving;

#import <Foundation/Foundation.h>


@interface DEDAttachmentItem : NSObject <DEDSecureArchiving>



@property (retain) NSURL *attachedPath; // ivar: _attachedPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceID; // ivar: _deviceID
@property (retain) NSString *displayName; // ivar: _displayName
@property (retain) NSNumber *fileSize; // ivar: _fileSize
@property (readonly) NSUInteger hash;
@property (retain) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly) Class superclass;


+(id)archivedClasses;
+(id)itemWithDEItem:(id)arg0 ;
+(id)itemWithDictionary:(id)arg0 ;
+(id)itemWithURL:(id)arg0 ;
-(BOOL)isLocal;
-(id)serialize;


@end


#endif