// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCOVERSHEETVIEWBASE_H
#define CSCOVERSHEETVIEWBASE_H

@class SBFTouchPassThroughView, NSString, NSArray;
@protocol CSPresentationProviding, UICoordinateSpace;



@interface CSCoverSheetViewBase : SBFTouchPassThroughView <CSPresentationProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *presentationCoordinateSpace;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly) Class superclass;


-(BOOL)isCoverSheetView;


@end


#endif