// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCMEDIALIBRARYINFO_H
#define ACCMEDIALIBRARYINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ACCMediaLibraryUpdateLibraryInfo.h"

@interface ACCMediaLibraryInfo : NSObject {
    BOOL _state;
    BOOL _stateInit;
}


@property (readonly, nonatomic) ACCMediaLibraryUpdateLibraryInfo *info; // ivar: _info
@property (readonly, nonatomic) NSString *libraryUID; // ivar: _libraryUID


-(BOOL)getState:(int)arg0 ;
-(BOOL)setState:(int)arg0 value:(BOOL)arg1 ;
-(id)description;
-(id)initWithInfo:(id)arg0 ;


@end


#endif