// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDMOVEATOM_H
#define FPDMOVEATOM_H

@class FPActionOperationLocator, NSString;

#import <Foundation/Foundation.h>


@interface FPDMoveAtom : NSObject

@property (readonly, nonatomic) unsigned char kind; // ivar: _kind
@property (readonly, nonatomic) NSUInteger materializeOption; // ivar: _materializeOption
@property (readonly, nonatomic) FPActionOperationLocator *root; // ivar: _root
@property (readonly, nonatomic) FPActionOperationLocator *source; // ivar: _source
@property (readonly, nonatomic) FPActionOperationLocator *targetFolder; // ivar: _targetFolder
@property (readonly, nonatomic) NSUInteger targetMaterializeOption; // ivar: _targetMaterializeOption
@property (readonly, nonatomic) NSString *targetName; // ivar: _targetName
@property (readonly, nonatomic) BOOL useAtomicMove; // ivar: _useAtomicMove
@property (readonly, nonatomic) BOOL useDiskWriter; // ivar: _useDiskWriter


+(id)atomForMoving:(id)arg0 toTargetFolder:(id)arg1 as:(id)arg2 root:(id)arg3 atomically:(BOOL)arg4 sourceMaterializeOption:(NSUInteger)arg5 targetMaterializeOption:(NSUInteger)arg6 useDiskWriter:(BOOL)arg7 ;
+(id)atomForPostFolderUnderRoot:(id)arg0 atomically:(BOOL)arg1 useDiskWriter:(BOOL)arg2 ;
-(BOOL)shouldAccountForDownloadOfSourceItemForMoveInfo:(id)arg0 extensionManager:(id)arg1 ;
-(id)description;
-(id)initWithKind:(unsigned char)arg0 source:(id)arg1 targetName:(id)arg2 targetFolder:(id)arg3 root:(id)arg4 atomically:(BOOL)arg5 sourceMaterializeOption:(NSUInteger)arg6 targetMaterializeOption:(NSUInteger)arg7 useDiskWriter:(BOOL)arg8 ;


@end


#endif