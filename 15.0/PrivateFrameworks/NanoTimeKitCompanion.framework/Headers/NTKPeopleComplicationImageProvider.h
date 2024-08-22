// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPEOPLECOMPLICATIONIMAGEPROVIDER_H
#define NTKPEOPLECOMPLICATIONIMAGEPROVIDER_H

@class CLKImageProvider, NSString, UIImage;



@interface NTKPeopleComplicationImageProvider : CLKImageProvider

@property CGFloat borderWidth; // ivar: _borderWidth
@property CGFloat fontSize; // ivar: _fontSize
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (retain, nonatomic) NSString *nameAbbreviation; // ivar: _nameAbbreviation
@property (retain, nonatomic) UIImage *profileImage; // ivar: _profileImage


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif