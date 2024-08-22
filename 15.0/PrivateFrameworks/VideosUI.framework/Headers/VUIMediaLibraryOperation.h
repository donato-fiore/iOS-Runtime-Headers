// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIALIBRARYOPERATION_H
#define VUIMEDIALIBRARYOPERATION_H

@class VUIAsynchronousOperation, VUIAsynchronousWorkToken, NSError;


#import "VUIMediaLibrary.h"

@interface VUIMediaLibraryOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIAsynchronousWorkToken *asyncWorkToken; // ivar: _asyncWorkToken
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary


-(id)init;
-(id)initWithMediaLibrary:(id)arg0 ;
-(void)cancel;


@end


#endif