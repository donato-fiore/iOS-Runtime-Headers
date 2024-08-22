// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCDIRECTORYBREADTHENUMERATOR_H
#define BRCDIRECTORYBREADTHENUMERATOR_H


#import <Foundation/Foundation.h>

#import "BRCRelativePath.h"

@interface BRCDirectoryBreadthEnumerator : NSObject {
    *? _dir;
    BRCRelativePath *_parentPath;
}




-(id)initWithParentPath:(id)arg0 error:(*int)arg1 ;
-(id)nextObjectWithIsDir:(*BOOL)arg0 error:(*int)arg1 ;
-(void)dealloc;


@end


#endif