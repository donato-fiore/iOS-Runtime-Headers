// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFILESERVICES_H
#define CNFILESERVICES_H

@class NSString;
@protocol CNFileServices;

#import <Foundation/Foundation.h>


@interface CNFileServices : NSObject <CNFileServices>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)tmpDirLog;
-(id)NSTemporaryDirectory;
-(id)bespokeTemporaryDirectory;
-(id)preferredTemporaryDirectory;
-(id)secureTemporaryDirectory;
-(id)secureTemporarySubdirectoryWithName:(id)arg0 ;
-(id)secureTemporarySubdirectoryWithSubpathComponents:(id)arg0 ;
-(id)temporaryDirectory;
-(id)temporaryDirectoryOfLastResort;
-(int)close:(int)arg0 ;
-(int)errnoValue;
-(int)fcntl_flock:(int)arg0 ;
-(int)flock:(int)arg0 ;
-(int)fstatfs:(int)arg0 ;
-(int)open:(char *)arg0 ;
-(int)statfs:(char *)arg0 ;


@end


#endif