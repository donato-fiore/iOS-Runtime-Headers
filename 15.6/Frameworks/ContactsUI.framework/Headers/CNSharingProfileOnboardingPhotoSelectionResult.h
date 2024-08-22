// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSHARINGPROFILEONBOARDINGPHOTOSELECTIONRESULT_H
#define CNSHARINGPROFILEONBOARDINGPHOTOSELECTIONRESULT_H

@class UIImage, NSData, NSString;

#import <Foundation/Foundation.h>


@interface CNSharingProfileOnboardingPhotoSelectionResult : NSObject

@property (nonatomic) NSInteger avatarType; // ivar: _avatarType
@property (retain, nonatomic) UIImage *compositedImage; // ivar: _compositedImage
@property (nonatomic) NSData *memojiMetadata; // ivar: _memojiMetadata
@property (retain, nonatomic) UIImage *originalImage; // ivar: _originalImage
@property (copy, nonatomic) NSString *variantName; // ivar: _variantName
@property (nonatomic) BOOL wasSelectedInFullPhotoPicker; // ivar: _wasSelectedInFullPhotoPicker




@end


#endif