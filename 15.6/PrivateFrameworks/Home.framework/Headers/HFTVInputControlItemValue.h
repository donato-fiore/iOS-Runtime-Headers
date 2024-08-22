// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFTVINPUTCONTROLITEMVALUE_H
#define HFTVINPUTCONTROLITEMVALUE_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFTVInputControlItemValue : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isConfigured;
@property (readonly, nonatomic) BOOL isHidden; // ivar: _isHidden
@property (readonly, nonatomic) BOOL isSelected; // ivar: _isSelected
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)valueWithInputName:(id)arg0 identifier:(id)arg1 isHidden:(BOOL)arg2 isSelected:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithInputName:(id)arg0 identifier:(id)arg1 isHidden:(BOOL)arg2 isSelected:(BOOL)arg3 ;


@end


#endif