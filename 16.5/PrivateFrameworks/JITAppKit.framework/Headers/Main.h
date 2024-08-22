// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAIN_H
#define MAIN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface Main : NSObject {
    NSString *_path;
    NSString *_fileName;
    *void _zip;
}


@property (readonly, nonatomic) BOOL close;
@property (readonly, nonatomic) BOOL open;


+(BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 ;
+(BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 keepParentDirectory:(BOOL)arg2 ;
+(BOOL)createZipFileAtPath:(id)arg0 withFilesAtPaths:(id)arg1 ;
+(BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 ;
+(BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 delegate:(id)arg2 ;
+(BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 error:(*id)arg4 ;
+(BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 error:(*id)arg4 delegate:(id)arg5 ;
// +(BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 error:(*id)arg4 delegate:(id)arg5 progressHandler:(id)arg6 completionHandler:(unk)arg7  ;
// +(BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 progressHandler:(id)arg4 completionHandler:(unk)arg5  ;
// +(BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
+(id)dateWithMicrosoftDOSFormat:(unsigned int)arg0 ;
-(BOOL)writeData:(id)arg0 fileName:(id)arg1 ;
-(BOOL)writeFile:(id)arg0 ;
-(BOOL)writeFileAtPath:(id)arg0 withFileName:(id)arg1 ;
-(BOOL)writeFolderAtPath:(id)arg0 withFolderName:(id)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(void)zipInformation:(struct ? *)arg0 setDate:(id)arg1 ;


@end


#endif