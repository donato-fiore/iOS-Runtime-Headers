// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICREMOVEMEDIADRMOPERATION_H
#define ICREMOVEMEDIADRMOPERATION_H

@class NSString, NSArray;


#import "ICRequestOperation.h"

@interface ICRemoveMediaDRMOperation : ICRequestOperation {
    NSString *_mediaFilePath;
    NSArray *_sinfs;
    NSString *_newFileExtension;
}




-(id)initWithFilePath:(id)arg0 sinfs:(id)arg1 ;
-(void)execute;
-(void)removeDRMWithCompletionHandler:(id)arg0 ;


@end


#endif