// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDTHREADMOCORGANIZER_H
#define TDTHREADMOCORGANIZER_H

@class NSThread;

#import <Foundation/Foundation.h>

#import "CoreThemeDocument.h"

@interface TDThreadMOCOrganizer : NSObject {
    NSThread *mainThread;
    CoreThemeDocument *document;
}




-(id)document;
-(id)init;
-(id)initWithDocument:(id)arg0 mainThread:(id)arg1 ;
-(id)mainMOC;
-(id)mainThread;
-(id)threadMOC;
-(void)setThreadMOC:(id)arg0 ;


@end


#endif