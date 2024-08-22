// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKATOMBATCHWRITEROPTIONS_H
#define CKATOMBATCHWRITEROPTIONS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CKAtomBatchWriterOptions : NSObject

@property (nonatomic) BOOL fileBacked; // ivar: _fileBacked
@property (nonatomic) unsigned char formatVersion; // ivar: _formatVersion
@property (copy, nonatomic) NSDictionary *underlyingWriterOptionsByClass; // ivar: _underlyingWriterOptionsByClass


-(id)init;


@end


#endif