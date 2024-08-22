// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCPROGRESS_H
#define BRCPROGRESS_H

@class NSProgress, NSMutableDictionary, NSArray;


#import "BRCAccountSession.h"

@interface BRCProgress : NSProgress {
    NSMutableDictionary *_progressByAliasContainerID;
    BRCAccountSession *_session;
    char _group;
}


@property (readonly, nonatomic) BOOL isPublished; // ivar: _published
@property (readonly, nonatomic) NSArray *parentFileIDs; // ivar: _parentFileIDs


+(id)_progressForDocument:(id)arg0 group:(char)arg1 sizeInfo:(id)arg2 ;
+(id)downloadProgressForDocument:(id)arg0 sizeInfo:(id)arg1 ;
+(id)uploadProgressForDocument:(id)arg0 sizeInfo:(id)arg1 ;
-(id)initWithGroup:(char)arg0 parentFileIDs:(id)arg1 session:(id)arg2 ;
-(void)addAliasItem:(id)arg0 ;
-(void)brc_publish;
-(void)brc_unpublish;
-(void)setCompletedUnitCount:(NSInteger)arg0 ;


@end


#endif