// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTTYPEDESCRIBING_H
#define SXCOMPONENTTYPEDESCRIBING_H

@class NSString;
@protocol SXComponentTypeDescribing, NSCopying;

#import <Foundation/Foundation.h>


@interface SXComponentTypeDescribing : NSObject <SXComponentTypeDescribing, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int role; // ivar: _role
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)descriptionWithType:(id)arg0 role:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif