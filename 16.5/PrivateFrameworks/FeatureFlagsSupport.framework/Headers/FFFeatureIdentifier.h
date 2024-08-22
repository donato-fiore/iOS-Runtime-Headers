// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FFFEATUREIDENTIFIER_H
#define FFFEATUREIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FFFeatureIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *domainName; // ivar: _domainName
@property (readonly, nonatomic) NSString *featureName; // ivar: _featureName


+(id)identifierFromString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDomain:(id)arg0 feature:(id)arg1 ;


@end


#endif