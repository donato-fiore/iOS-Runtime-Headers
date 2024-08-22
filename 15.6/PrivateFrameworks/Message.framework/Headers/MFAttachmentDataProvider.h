// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFATTACHMENTDATAPROVIDER_H
#define MFATTACHMENTDATAPROVIDER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface MFAttachmentDataProvider : NSObject

@property (retain) NSURL *url; // ivar: _url


+(id)dataProviderWithPath:(id)arg0 ;
+(id)dataProviderWithURL:(id)arg0 ;
-(BOOL)_isFileURL;
-(BOOL)exists;
-(BOOL)save:(id)arg0 ;
-(id)_fileAttributes:(id)arg0 ;
-(id)_path;
-(id)data;
-(id)errorWithMessage:(id)arg0 code:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif