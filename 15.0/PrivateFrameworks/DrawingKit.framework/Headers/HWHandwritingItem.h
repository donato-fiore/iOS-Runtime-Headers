// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HWHANDWRITINGITEM_H
#define HWHANDWRITINGITEM_H

@class NSDate, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DKDrawing.h"

@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSDate *creationDate; // ivar: _creationDate
@property (retain) DKDrawing *drawing; // ivar: _drawing
@property (retain) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDrawing:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif