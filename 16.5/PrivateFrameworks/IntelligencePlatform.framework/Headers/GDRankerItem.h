// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDRANKERITEM_H
#define GDRANKERITEM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GDEntityIdentifier.h"

@interface GDRankerItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy, nonatomic) GDEntityIdentifier *entityID; // ivar: _entityID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityID:(id)arg0 confidence:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif