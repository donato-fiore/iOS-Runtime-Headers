// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNVIRTUALFILE_H
#define _CNVIRTUALFILE_H

@class NSData, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _CNVirtualFile : NSObject

@property (copy) NSData *contents; // ivar: _contents
@property (readonly) NSMutableDictionary *extendedAttributes; // ivar: _extendedAttributes


-(id)init;


@end


#endif