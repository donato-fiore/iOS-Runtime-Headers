// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFPATHCOMPONENT_H
#define EFPATHCOMPONENT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EFPathComponent.h"

@interface EFPathComponent : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger length;
@property (readonly, copy, nonatomic) EFPathComponent *pathComponentByDeletingPathExtension;
@property (readonly, copy, nonatomic) NSString *pathExtension;
@property (readonly, copy, nonatomic) NSString *sanitizedString; // ivar: _sanitizedString


+(id)pathComponentWithString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithString:(id)arg0 ;
-(id)subpathToIndex:(NSUInteger)arg0 ;


@end


#endif