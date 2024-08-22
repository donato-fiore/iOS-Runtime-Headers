// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFFILEVALUE_H
#define WFFILEVALUE_H

@class NSURL, NSData, NSString;
@protocol WFVariableSerialization;

#import <Foundation/Foundation.h>

#import "WFFileLocation.h"

@interface WFFileValue : NSObject <WFVariableSerialization>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSData *bookmarkData; // ivar: _bookmarkData
@property (readonly, nonatomic) NSString *cachedDisplayName; // ivar: _cachedDisplayName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) WFFileLocation *fileLocation; // ivar: _fileLocation
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createBookmarkWithFileURL:(id)arg0 workflowID:(id)arg1 ;
+(id)defaultValueWithWorkflowID:(id)arg0 ;
-(BOOL)isSupportedOnCurrentDevice;
-(id)initWithBookmarkData:(id)arg0 filename:(id)arg1 displayName:(id)arg2 ;
-(id)initWithFileLocation:(id)arg0 filename:(id)arg1 displayName:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 workflowID:(id)arg1 ;
-(id)resolveURLWithWorkflowID:(id)arg0 error:(*id)arg1 ;
-(id)serializedRepresentation;


@end


#endif