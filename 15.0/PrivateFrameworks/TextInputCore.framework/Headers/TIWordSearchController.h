// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIWORDSEARCHCONTROLLER_H
#define TIWORDSEARCHCONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface TIWordSearchController : NSObject

@property (retain, nonatomic) NSMapTable *inputModeToWordSearchMapping; // ivar: _inputModeToWordSearchMapping


+(id)sharedWordSearchController;
-(id)init;
-(id)wordSearchForInputMode:(id)arg0 ;
-(void)setWordSearch:(id)arg0 forInputMode:(id)arg1 ;


@end


#endif