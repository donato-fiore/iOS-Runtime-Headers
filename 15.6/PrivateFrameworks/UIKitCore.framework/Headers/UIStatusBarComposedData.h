// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTATUSBARCOMPOSEDDATA_H
#define UISTATUSBARCOMPOSEDDATA_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UISystemNavigationAction.h"

@interface UIStatusBarComposedData : NSObject <NSCopying>

 {
    ? _rawData;
    BOOL _itemEnabled;
}


@property (copy, nonatomic) NSString *doubleHeightStatus; // ivar: _doubleHeightStatus
@property (readonly, nonatomic) *? rawData;
@property (retain, nonatomic) UISystemNavigationAction *systemNavigationItem; // ivar: _systemNavigationItem


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isItemEnabled:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRawData:(struct ? *)arg0 ;
-(void)setItem:(int)arg0 enabled:(BOOL)arg1 ;


@end


#endif