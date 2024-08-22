// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIDOCUPLOADSESSION_H
#define DIDOCUPLOADSESSION_H


#import <Foundation/Foundation.h>

#import "DIDocUploadSessionClient.h"

@interface DIDocUploadSession : NSObject

@property (retain) DIDocUploadSessionClient *client; // ivar: _client


-(id)init;
-(void)cancelUploads;
-(void)uploadDocData:(id)arg0 uploadSettings:(id)arg1 completion:(id)arg2 ;


@end


#endif