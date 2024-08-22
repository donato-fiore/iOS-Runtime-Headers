// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKPEOPLECOMPLICATIONENTRY_H
#define NTKPEOPLECOMPLICATIONENTRY_H

@class NSString, UIImage;


#import "NTKTimelineEntryModel.h"

@interface NTKPeopleComplicationEntry : NTKTimelineEntryModel {
    BOOL _isLocked;
}


@property (readonly, nonatomic) NSString *abbreviation; // ivar: _abbreviation
@property (readonly, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) UIImage *profileImage; // ivar: _profileImage


+(id)lockedEntry;
-(id)initWithFullName:(id)arg0 abbreviation:(id)arg1 profileImage:(id)arg2 ;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif