// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUCOMPOSITION_H
#define NUCOMPOSITION_H

@class NSDictionary, NSString;
@protocol NUIdentifiable;

#import <Foundation/Foundation.h>

#import "NUIdentifier.h"
#import "NUCompositionSchema.h"

@interface NUComposition : NSObject <NUIdentifiable>



@property (readonly, nonatomic) NSDictionary *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NUIdentifier *identifier; // ivar: _identifier
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NUCompositionSchema *schema; // ivar: _schema
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToComposition:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCompositionSchema:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif