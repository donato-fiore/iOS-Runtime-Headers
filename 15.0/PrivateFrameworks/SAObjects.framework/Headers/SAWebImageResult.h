// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWEBIMAGERESULT_H
#define SAWEBIMAGERESULT_H

@class NSNumber, NSArray;


#import "SAWebWebResult.h"
#import "SAWebAcePicture.h"

@interface SAWebImageResult : SAWebWebResult

@property (copy, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) SAWebAcePicture *picture;
@property (copy, nonatomic) NSArray *thumbNails;


+(id)imageResult;
+(id)imageResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif