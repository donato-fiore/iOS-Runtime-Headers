// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBARCHIVEDELEGATEIMPL_H
#define RBARCHIVEDELEGATEIMPL_H

@class NSString;
@protocol RBEncoderDelegate, RBDecoderDelegate;

#import <Foundation/Foundation.h>


@interface RBArchiveDelegateImpl : NSObject <RBEncoderDelegate, RBDecoderDelegate>

 {
    unsigned int _flags;
    objc_ptr<NSData *> _metadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)decodedImageContentsWithData:(id)arg0 type:(*int)arg1 error:(*id)arg2 ;
-(id)encodedCGFontData:(struct CGFont *)arg0 error:(*id)arg1 ;
-(id)encodedImageData:(struct ? )arg0 error:(*id)arg1 ;
-(id)encodedMetadata;
-(id)initWithFlags:(unsigned int)arg0 ;
-(struct CGFont *)decodedCGFontWithData:(id)arg0 error:(*id)arg1 ;
-(void)decodedMetadata:(id)arg0 ;


@end


#endif