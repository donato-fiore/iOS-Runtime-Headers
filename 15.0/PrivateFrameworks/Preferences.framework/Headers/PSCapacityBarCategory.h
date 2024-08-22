// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSCAPACITYBARCATEGORY_H
#define PSCAPACITYBARCATEGORY_H

@class UIColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PSCapacityBarCategory : NSObject <NSCopying>



@property NSUInteger bytes; // ivar: _bytes
@property (retain) UIColor *color; // ivar: _color
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 color:(id)arg2 bytes:(NSInteger)arg3 ;


@end


#endif