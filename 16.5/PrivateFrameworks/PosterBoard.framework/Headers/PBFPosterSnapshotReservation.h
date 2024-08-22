// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERSNAPSHOTRESERVATION_H
#define PBFPOSTERSNAPSHOTRESERVATION_H

@class NSURL, NSString, NSError, UIImage;
@protocol NSCopying, BSCancellable;

#import <Foundation/Foundation.h>


@interface PBFPosterSnapshotReservation : NSObject <NSCopying, BSCancellable>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fetchImageWithError:(*id)arg0 ;
-(id)initWithURL:(id)arg0 image:(id)arg1 error:(id)arg2 ;
-(void)cancel;


@end


#endif