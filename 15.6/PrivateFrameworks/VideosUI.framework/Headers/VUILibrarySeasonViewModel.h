// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYSEASONVIEWMODEL_H
#define VUILIBRARYSEASONVIEWMODEL_H

@class NSString;
@protocol NSCopying, VUIMediaEntityIdentifier;

#import <Foundation/Foundation.h>


@interface VUILibrarySeasonViewModel : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier; // ivar: _seasonIdentifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSeasonIdentifier:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif