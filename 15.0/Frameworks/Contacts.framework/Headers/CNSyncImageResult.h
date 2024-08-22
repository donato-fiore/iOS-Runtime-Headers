// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSYNCIMAGERESULT_H
#define CNSYNCIMAGERESULT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CNSyncImageResult : NSObject

@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSData *imageHash; // ivar: _imageHash
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 imageData:(id)arg1 cropRect:(struct CGRect )arg2 imageHash:(id)arg3 ;


@end


#endif