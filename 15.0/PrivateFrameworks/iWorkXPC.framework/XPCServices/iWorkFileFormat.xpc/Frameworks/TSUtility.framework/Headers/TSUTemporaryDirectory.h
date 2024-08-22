// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUTEMPORARYDIRECTORY_H
#define TSUTEMPORARYDIRECTORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}




-(BOOL)_createDirectoryWithSignature:(id)arg0 subdirectory:(id)arg1 error:(*id)arg2 ;
-(id)URL;
-(id)init;
-(id)initForWritingToURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithError:(*id)arg0 ;
-(id)initWithSignature:(id)arg0 error:(*id)arg1 ;
-(id)initWithSignature:(id)arg0 subdirectory:(id)arg1 error:(*id)arg2 ;
-(id)path;
-(void)dealloc;
-(void)leakTemporaryDirectory;
-(void)removeDirectory;


@end


#endif