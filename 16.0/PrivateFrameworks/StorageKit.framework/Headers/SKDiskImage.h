// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKDISKIMAGE_H
#define SKDISKIMAGE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface SKDiskImage : NSObject

@property (readonly, nonatomic) NSURL *imageURL; // ivar: _imageURL


-(id)attachWithError:(*id)arg0 ;
-(id)attachWithParams:(id)arg0 error:(*id)arg1 ;
-(id)deduceDiskFrom:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)diskImagesAttachWith:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)mount:(id)arg0 params:(id)arg1 outError:(*id)arg2 ;


@end


#endif