// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSODATAFRAMEATTACHMENT_H
#define ESPRESSODATAFRAMEATTACHMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EspressoDataFrameAttachment : NSObject

@property BOOL disabled; // ivar: _disabled
@property (retain) NSString *filePath; // ivar: _filePath
@property NSUInteger offset; // ivar: _offset
@property *void rawPointer; // ivar: _rawPointer
@property NSUInteger size; // ivar: _size


+(id)fromDict:(id)arg0 frameStorage:(id)arg1 ;
-(void)loadFromDict:(id)arg0 frameStorage:(id)arg1 ;


@end


#endif