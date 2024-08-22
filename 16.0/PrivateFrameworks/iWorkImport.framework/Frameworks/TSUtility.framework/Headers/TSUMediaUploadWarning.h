// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUMEDIAUPLOADWARNING_H
#define TSUMEDIAUPLOADWARNING_H



#import "TSUWarning.h"

@interface TSUMediaUploadWarning : TSUWarning

@property (readonly, nonatomic) BOOL isFromUploader; // ivar: _isFromUploader


-(id)initWithKind:(NSInteger)arg0 message:(id)arg1 isFromUploader:(BOOL)arg2 ;


@end


#endif