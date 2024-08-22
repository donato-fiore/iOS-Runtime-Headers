// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONITEMINSPECTOR_H
#define SFCOLLABORATIONITEMINSPECTOR_H


#import <Foundation/Foundation.h>


@interface SFCollaborationItemInspector : NSObject



+(id)_collaborationItemForFileURL:(id)arg0 itemProvider:(id)arg1 activityItem:(id)arg2 service:(id)arg3 managedFileURL:(id)arg4 ;
+(id)_collaborationItemFromItemProvider:(id)arg0 forActivityItem:(id)arg1 service:(id)arg2 shouldInspectFiles:(BOOL)arg3 managedFileURL:(id)arg4 ;
+(id)inspectActivityItemValue:(id)arg0 activityItem:(id)arg1 service:(id)arg2 shouldInspectFiles:(BOOL)arg3 managedFileURL:(id)arg4 ;


@end


#endif