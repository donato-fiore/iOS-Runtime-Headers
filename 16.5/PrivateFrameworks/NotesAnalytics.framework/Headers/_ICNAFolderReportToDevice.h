// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICNAFOLDERREPORTTODEVICE_H
#define _ICNAFOLDERREPORTTODEVICE_H


#import <Foundation/Foundation.h>


@interface _ICNAFolderReportToDevice : NSObject {
    int _folderCollaborationMatrix;
}




-(NSUInteger)countOfFoldersWithCollaborationStatus:(NSInteger)arg0 collaborationType:(NSInteger)arg1 ;
-(id)init;
-(void)updateFolderCollaborationMatrixWithCollaborationStatus:(id)arg0 collaborationType:(id)arg1 ;


@end


#endif