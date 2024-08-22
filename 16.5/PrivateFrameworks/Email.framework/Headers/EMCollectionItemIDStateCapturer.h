// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMCOLLECTIONITEMIDSTATECAPTURER_H
#define EMCOLLECTIONITEMIDSTATECAPTURER_H

@class EFListStateCapturer, NSString;
@protocol EFListStateCapturerDelegate, EMCollectionItemIDStateCapturerDelegate;



@interface EMCollectionItemIDStateCapturer : EFListStateCapturer <EFListStateCapturerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<EMCollectionItemIDStateCapturerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)descriptionForItem:(id)arg0 ;
-(id)initWithTitle:(id)arg0 delegate:(id)arg1 ;
-(id)itemsForStateCaptureWithErrorString:(*id)arg0 ;
-(id)labelForStateCapture;


@end


#endif