// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMRESOLUTIONTOKENMAP_H
#define REMRESOLUTIONTOKENMAP_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface REMResolutionTokenMap : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableDictionary *map; // ivar: _map


+(BOOL)supportsSecureCoding;
+(id)mapWithData:(id)arg0 ;
+(id)resolutionTokenMapWithJSONData:(id)arg0 keyMap:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeWithMap:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)compare:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)compareAndMergeWithMap:(id)arg0 forKey:(id)arg1 ;
-(id)archivedData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)getTokenForKey:(id)arg0 ;
-(id)getTokenKeys;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMap:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceMergeFromMap:(id)arg0 forKey:(id)arg1 ;
-(void)initTokenWithDefaultValueIfNecessaryForKey:(id)arg0 ;
-(void)setToken:(id)arg0 forKey:(id)arg1 ;
-(void)updateForKey:(id)arg0 ;


@end


#endif