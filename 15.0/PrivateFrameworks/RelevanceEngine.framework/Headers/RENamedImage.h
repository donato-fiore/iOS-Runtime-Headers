// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RENAMEDIMAGE_H
#define RENAMEDIMAGE_H

@class NSBundle, NSString;


#import "REImage.h"

@interface RENamedImage : REImage

@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 inBundle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif