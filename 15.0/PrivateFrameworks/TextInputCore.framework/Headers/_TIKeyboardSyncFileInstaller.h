// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TIKEYBOARDSYNCFILEINSTALLER_H
#define _TIKEYBOARDSYNCFILEINSTALLER_H

@class _KSFileEntry;

#import <Foundation/Foundation.h>


@interface _TIKeyboardSyncFileInstaller : NSObject {
    _KSFileEntry *_entry;
}




-(BOOL)valid;
-(id)initWithEntry:(id)arg0 ;
-(void)dealloc;
-(void)execute;
-(void)invalidate;


@end


#endif