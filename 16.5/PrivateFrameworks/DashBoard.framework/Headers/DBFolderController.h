// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBFOLDERCONTROLLER_H
#define DBFOLDERCONTROLLER_H

@class SBRootFolderController;
@protocol DBEnvironment;



@interface DBFolderController : SBRootFolderController

@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment


+(Class)_contentViewClass;
+(Class)listViewClass;
-(BOOL)hasDock;


@end


#endif