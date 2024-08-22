// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFEXTRACTSHORTCUTRESULT_H
#define WFEXTRACTSHORTCUTRESULT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "WFWorkflowRecord.h"

@interface WFExtractShortcutResult : NSObject

@property (readonly, nonatomic) NSInteger fileContentType; // ivar: _fileContentType
@property (readonly, copy, nonatomic) NSString *iCloudIdentifier; // ivar: _iCloudIdentifier
@property (readonly, nonatomic) WFWorkflowRecord *record; // ivar: _record
@property (readonly, nonatomic) NSDate *sharedDate; // ivar: _sharedDate
@property (readonly, copy, nonatomic) NSString *sourceApplicationIdentifier; // ivar: _sourceApplicationIdentifier


-(id)initWithRecord:(id)arg0 fileContentType:(NSInteger)arg1 iCloudIdentifier:(id)arg2 sourceApplicationIdentifier:(id)arg3 sharedDate:(id)arg4 ;
-(id)initWithRecord:(id)arg0 fileContentType:(NSInteger)arg1 sourceApplicationIdentifier:(id)arg2 sharedDate:(id)arg3 ;


@end


#endif