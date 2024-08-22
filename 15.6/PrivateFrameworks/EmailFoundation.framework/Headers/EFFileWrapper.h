// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFFILEWRAPPER_H
#define EFFILEWRAPPER_H

@class NSFileWrapper;


#import "EFPathComponent.h"

@interface EFFileWrapper : NSFileWrapper

@property (retain, nonatomic) EFPathComponent *filenamePathComponent; // ivar: _filenamePathComponent
@property (retain, nonatomic) EFPathComponent *preferredFilenamePathComponent; // ivar: _preferredFilenamePathComponent


-(id)filename;
-(id)init;
-(id)initDirectoryWithFileWrappers:(id)arg0 ;
-(id)initRegularFileWithContents:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)initWithURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)preferredFilename;
-(void)setFilename:(id)arg0 ;
-(void)setPreferredFilename:(id)arg0 ;


@end


#endif