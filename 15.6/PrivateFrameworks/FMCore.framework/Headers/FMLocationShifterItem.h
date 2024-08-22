// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMLOCATIONSHIFTERITEM_H
#define FMLOCATIONSHIFTERITEM_H

@class NSError, NSDate;

#import <Foundation/Foundation.h>


@interface FMLocationShifterItem : NSObject

@property (nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (readonly, nonatomic) id *context; // ivar: _context
@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL shifted; // ivar: _shifted
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)description;
-(id)init;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 accuracy:(CGFloat)arg1 timestamp:(id)arg2 context:(id)arg3 ;


@end


#endif