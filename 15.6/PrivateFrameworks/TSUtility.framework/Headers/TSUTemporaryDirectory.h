// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUTEMPORARYDIRECTORY_H
#define TSUTEMPORARYDIRECTORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}




-(id)URL;
-(id)init;
-(id)initWithSignature:(id)arg0 ;
-(id)initWithSignature:(id)arg0 subdirectory:(id)arg1 ;
-(id)path;
-(void)_createDirectoryWithSignature:(id)arg0 subdirectory:(id)arg1 ;
-(void)dealloc;
-(void)leakTemporaryDirectory;


@end


#endif