// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCOLLABORATIONCOLORMANAGER_H
#define ICCOLLABORATIONCOLORMANAGER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICCollaborationColorManager : NSObject

@property (nonatomic) NSUInteger colorUsageCountMinimum; // ivar: _colorUsageCountMinimum
@property (retain, nonatomic) NSMutableArray *colorUsageCounts; // ivar: _colorUsageCounts
@property (retain, nonatomic) NSMutableDictionary *userIDToColorsDict; // ivar: _userIDToColorsDict


+(id)defaultColor;
+(id)participantColors;
-(id)baseColorValuesForUserID:(id)arg0 ;
-(id)containerScopedUserRecordNameForAccount:(id)arg0 ;
-(id)highlightColorForUserID:(id)arg0 note:(id)arg1 ;
-(id)init;
-(id)participantAXDisplayNameForUserID:(id)arg0 forNote:(id)arg1 ;


@end


#endif