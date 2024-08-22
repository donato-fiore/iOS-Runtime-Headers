// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLFEATUREVERSIONHISTORY_H
#define CPLFEATUREVERSIONHISTORY_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
}


@property (readonly, nonatomic) NSInteger currentFeatureVersion; // ivar: _currentFeatureVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)featureVersionForSyncAnchor:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentFeatureVersion:(NSInteger)arg0 ;
-(id)syncAnchorForFeatureVersion:(NSInteger)arg0 ;
-(void)addSyncAnchor:(id)arg0 forFeatureVersion:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateHistoryWithBlock:(id)arg0 ;


@end


#endif