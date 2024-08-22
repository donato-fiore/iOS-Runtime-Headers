// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITRACKLISTCOLUMN_H
#define SKUITRACKLISTCOLUMN_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUITracklistColumn : NSObject <NSCopying>



@property (nonatomic) NSInteger columnIdentifier; // ivar: _columnIdentifier
@property (nonatomic) NSInteger contentAlignment; // ivar: _contentAlignment
@property (nonatomic) NSInteger headerAlignment; // ivar: _headerAlignment
@property (nonatomic) CGFloat maximumWidthFraction; // ivar: _maximumWidthFraction
@property (nonatomic) CGFloat preferredWidth; // ivar: _preferredWidth
@property (nonatomic) BOOL showsPreviewControl; // ivar: _showsPreviewControl
@property (nonatomic) BOOL sizesToFit; // ivar: _sizesToFit
@property (nonatomic) CGFloat width; // ivar: _width


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif