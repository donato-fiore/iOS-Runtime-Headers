// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSHAREDLIBRARYBADGE_H
#define CAMSHAREDLIBRARYBADGE_H

@class CEKBadgeTextView;



@interface CAMSharedLibraryBadge : CEKBadgeTextView

@property (nonatomic) NSInteger sharedLibraryMode; // ivar: _sharedLibraryMode


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTextAndColors;


@end


#endif