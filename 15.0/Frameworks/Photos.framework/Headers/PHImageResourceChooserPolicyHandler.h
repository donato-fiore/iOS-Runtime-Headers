// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMAGERESOURCECHOOSERPOLICYHANDLER_H
#define PHIMAGERESOURCECHOOSERPOLICYHANDLER_H


#import <Foundation/Foundation.h>


@interface PHImageResourceChooserPolicyHandler : NSObject



+(BOOL)_passesSquareTableThumbnailTestWithKey:(id)arg0 pixelSize:(struct CGSize )arg1 storeClassID:(unsigned short)arg2 loadingOptions:(NSUInteger)arg3 ;
+(NSUInteger)qualifyResourceInfo:(id)arg0 againstPolicy:(NSInteger)arg1 requestInfo:(id)arg2 reversed:(BOOL)arg3 tooLargeForPolicy:(*BOOL)arg4 disqualificationReason:(*id)arg5 ;


@end


#endif