// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLFSYSTEMSHELLSWITCHER_H
#define CLFSYSTEMSHELLSWITCHER_H


#import <Foundation/Foundation.h>


@interface CLFSystemShellSwitcher : NSObject

@property (nonatomic, getter=isClarityBoardEnabled) BOOL clarityBoardEnabled; // ivar: _clarityBoardEnabled


-(BOOL)_createFileWithError:(*id)arg0 ;
-(BOOL)_removeFileWithError:(*id)arg0 ;
-(id)_directoryURL;


@end


#endif