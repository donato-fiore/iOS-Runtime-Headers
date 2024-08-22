// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSHARENOTEEXPORTER_H
#define ICSHARENOTEEXPORTER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface ICShareNoteExporter : NSObject

@property (retain, nonatomic) NSURL *exportDirectory; // ivar: _exportDirectory


-(id)exportRTFDFileFromNote:(id)arg0 ;
-(id)fileWrapperForNote:(id)arg0 ;
-(id)filenameFromTitle:(id)arg0 ;
-(void)cleanUpExportedFiles;


@end


#endif