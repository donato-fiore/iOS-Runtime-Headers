// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCLOCALAREASMAPPING_H
#define FCLOCALAREASMAPPING_H

@class NSArray, NSData, NSString, NSDictionary;
@protocol FCLocalAreasProvider, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FCLocalAreasMapping : NSObject <FCLocalAreasProvider, NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *areas; // ivar: _areas
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *regionMap; // ivar: _regionMap
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)areasForLocation:(id)arg0 ;
-(id)autoFavoriteTagIDsForLocation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filterOuterRegions:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)regionsForLocation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif