// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCFACEDETAILENUMERATEDEDITOPTIONCELL_H
#define NTKCFACEDETAILENUMERATEDEDITOPTIONCELL_H



#import "NTKCDetailTableViewCell.h"
#import "NTKEditOption.h"

@interface NTKCFaceDetailEnumeratedEditOptionCell : NTKCDetailTableViewCell

@property (nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) NTKEditOption *editOption; // ivar: _editOption


+(id)reuseIdentifier;
-(CGFloat)rowHeight;
-(id)initWithEditOption:(id)arg0 ;


@end


#endif