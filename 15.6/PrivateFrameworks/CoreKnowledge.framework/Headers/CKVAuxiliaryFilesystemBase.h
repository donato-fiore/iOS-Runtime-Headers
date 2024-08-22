// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVAUXILIARYFILESYSTEMBASE_H
#define CKVAUXILIARYFILESYSTEMBASE_H

@class NSString;


#import "CKVFilesystemBase.h"

@interface CKVAuxiliaryFilesystemBase : CKVFilesystemBase {
    NSString *_name;
    BOOL _isSaved;
}




+(BOOL)savedBaseExistsWithName:(id)arg0 ;
+(id)_savedBaseDirectoryURLWithName:(id)arg0 ;
+(id)savedBaseWithName:(id)arg0 ;
+(id)temporaryBaseWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 isSaved:(BOOL)arg1 ;
-(id)save;
-(void)remove;


@end


#endif