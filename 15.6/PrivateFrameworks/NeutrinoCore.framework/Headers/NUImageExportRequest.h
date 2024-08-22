// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUIMAGEEXPORTREQUEST_H
#define NUIMAGEEXPORTREQUEST_H

@class NSDictionary, NSString;
@protocol NUTimeBased;


#import "NUExportRequest.h"
#import "NUColorSpace.h"
#import "NUImageExportFormat.h"

@interface NUImageExportRequest : NUExportRequest <NUTimeBased>



@property (copy) NSDictionary *auxImages; // ivar: _auxImages
@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NUImageExportFormat *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (copy) NSDictionary *imageProperties; // ivar: _imageProperties
@property (nonatomic) BOOL renderToData; // ivar: _renderToData
@property (nonatomic) BOOL renderWithIOSurface; // ivar: _renderWithIOSurface
@property (readonly) Class superclass;
@property (nonatomic) ? time;


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)initWithComposition:(id)arg0 destinationURL:(id)arg1 ;
-(id)initWithComposition:(id)arg0 exportFormat:(id)arg1 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif