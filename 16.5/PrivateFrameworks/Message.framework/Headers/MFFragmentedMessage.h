// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFFRAGMENTEDMESSAGE_H
#define MFFRAGMENTEDMESSAGE_H

@class NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface MFFragmentedMessage : NSObject

@property (readonly, copy, nonatomic) NSArray *existingParts; // ivar: _existingParts
@property (readonly, nonatomic) NSURL *mainFile; // ivar: _mainFile
@property (readonly, nonatomic) ? uidAndSize; // ivar: _uidAndSize




@end


#endif