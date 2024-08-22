// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCFONTMETADATA_H
#define OCFONTMETADATA_H

@class NSArray, OCFontPanose1, OCFontSig;

#import <Foundation/Foundation.h>


@interface OCFontMetadata : NSObject

@property (readonly, nonatomic) NSArray *altNames; // ivar: _altNames
@property (readonly, nonatomic) int charSet; // ivar: _charSet
@property (readonly, nonatomic) int genericFamily; // ivar: _genericFamily
@property (readonly, nonatomic) OCFontPanose1 *panose1; // ivar: _panose1
@property (readonly, nonatomic) int pitch; // ivar: _pitch
@property (readonly, nonatomic) OCFontSig *sig; // ivar: _sig


+(id)fontMetadataWithSig:(id)arg0 charSet:(int)arg1 panose1:(id)arg2 pitch:(int)arg3 genericFamily:(int)arg4 altNames:(id)arg5 ;
-(id)initWithSig:(id)arg0 charSet:(int)arg1 panose1:(id)arg2 pitch:(int)arg3 genericFamily:(int)arg4 altNames:(id)arg5 ;


@end


#endif