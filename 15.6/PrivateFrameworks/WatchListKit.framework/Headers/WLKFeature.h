// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKFEATURE_H
#define WLKFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKFeature : NSObject

@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFeature:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)jsonRepresentation;


@end


#endif