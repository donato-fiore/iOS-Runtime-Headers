// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUSERPHOTOEDITOPTION_H
#define NTKUSERPHOTOEDITOPTION_H



#import "NTKEditOption.h"

@interface NTKUserPhotoEditOption : NTKEditOption

@property (nonatomic) BOOL usesDefaultPhoto; // ivar: _usesDefaultPhoto


+(BOOL)supportsSecureCoding;
+(id)optionUsingDefaultPhoto:(BOOL)arg0 forDevice:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidOption;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)dailySnapshotKey;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 forDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif