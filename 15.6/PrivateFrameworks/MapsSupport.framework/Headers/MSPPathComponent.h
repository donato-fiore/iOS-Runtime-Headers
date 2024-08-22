// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPPATHCOMPONENT_H
#define MSPPATHCOMPONENT_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MSPPathComponent : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned short index; // ivar: _index
@property (readonly, nonatomic) NSUUID *originIdentifier; // ivar: _originIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIndex:(unsigned short)arg0 originIdentifier:(id)arg1 ;


@end


#endif