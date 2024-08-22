// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHORTCUTBOOKMARKSDESCRIPTOR_H
#define WFSHORTCUTBOOKMARKSDESCRIPTOR_H

@class WFDatabaseObjectDescriptor, NSData, NSString;



@interface WFShortcutBookmarksDescriptor : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSData *bookmarkData; // ivar: _bookmarkData
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkflowID:(id)arg0 path:(id)arg1 bookmarkData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif