// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3ARTWORKCOLORANALYSIS_H
#define ML3ARTWORKCOLORANALYSIS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ML3ArtworkColorAnalysis : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight; // ivar: _backgroundColorLight
@property (readonly, nonatomic) NSString *primaryTextColor; // ivar: _primaryTextColor
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight; // ivar: _primaryTextColorLight
@property (readonly, nonatomic) NSString *secondaryTextColor; // ivar: _secondaryTextColor
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight; // ivar: _secondaryTextColorLight


+(BOOL)supportsSecureCoding;
-(id)dictRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorAnalysis:(id)arg0 ;
-(id)initWithColorAnalysisDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif