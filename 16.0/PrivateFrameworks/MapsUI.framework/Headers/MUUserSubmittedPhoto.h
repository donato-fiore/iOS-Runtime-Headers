// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUUSERSUBMITTEDPHOTO_H
#define MUUSERSUBMITTEDPHOTO_H

@class NSURL, NSString;
@protocol MUPhotoTileViewModel;

#import <Foundation/Foundation.h>


@interface MUUserSubmittedPhoto : NSObject <MUPhotoTileViewModel>

 {
    NSURL *_photoURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithPhotoURL:(id)arg0 ;
-(void)configureWithSize:(struct CGSize )arg0 imageProvider:(id)arg1 ;


@end


#endif