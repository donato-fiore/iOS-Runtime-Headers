// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGSESSIONMODIFICATIONS_H
#define PREDITINGSESSIONMODIFICATIONS_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PREditingSessionModifications : NSObject <NSCopying>



@property (nonatomic) BOOL colorModified; // ivar: _colorModified
@property (nonatomic) BOOL containedWidgetsBeforeEdit; // ivar: _containedWidgetsBeforeEdit
@property (nonatomic) BOOL fontModified; // ivar: _fontModified
@property (nonatomic) BOOL numberingSystemModified; // ivar: _numberingSystemModified
@property (nonatomic) BOOL posterContentModified; // ivar: _posterContentModified
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) BOOL widgetsModified; // ivar: _widgetsModified


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif