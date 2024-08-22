// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROJECTIMPORTEXPORT_H
#define PROJECTIMPORTEXPORT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ProjectImportExport : NSObject

@property (retain) NSMutableArray *exportedProjectList; // ivar: _exportedProjectList


+(id)sharedInstance;
-(BOOL)haveExportedProjectNamed:(id)arg0 ;
-(id)init;
-(void)deleteExportedProject:(id)arg0 ;
-(void)deleteExportedProjectWithName:(id)arg0 ;
-(void)refreshExportedProjectFileList;
-(void)undeleteExportedProject:(id)arg0 ;


@end


#endif