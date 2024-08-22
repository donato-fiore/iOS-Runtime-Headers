// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUSOURCE_H
#define NUSOURCE_H

@class NSString;
@protocol NUIdentifiable;

#import <Foundation/Foundation.h>

#import "NUIdentifier.h"

@interface NUSource : NSObject <NUIdentifiable>



@property (copy, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NUIdentifier *identifier;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)sourceDefinition:(*id)arg0 ;


@end


#endif