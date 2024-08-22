// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILSHOWSECONDSCELL_H
#define NTKCFACEDETAILSHOWSECONDSCELL_H



#import "NTKCFaceDetailToggleCell.h"
#import "NTKEditOptionCollection.h"

@interface NTKCFaceDetailShowSecondsCell : NTKCFaceDetailToggleCell

@property (readonly, nonatomic) NTKEditOptionCollection *collection; // ivar: _collection
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode


+(id)reuseIdentifier;
-(id)initWithCollection:(id)arg0 ;


@end


#endif