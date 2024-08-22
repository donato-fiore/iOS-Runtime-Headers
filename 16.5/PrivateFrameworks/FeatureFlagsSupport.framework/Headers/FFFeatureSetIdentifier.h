// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FFFEATURESETIDENTIFIER_H
#define FFFEATURESETIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FFFeatureSetIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *featureGroupName; // ivar: _featureGroupName
@property (readonly, nonatomic) NSString *featureSetName; // ivar: _featureSetName


+(id)identifierFromString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGroup:(id)arg0 set:(id)arg1 ;


@end


#endif