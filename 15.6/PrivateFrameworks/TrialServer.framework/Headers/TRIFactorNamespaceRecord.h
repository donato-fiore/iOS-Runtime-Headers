// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFACTORNAMESPACERECORD_H
#define TRIFACTORNAMESPACERECORD_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIFactorNamespaceRecord : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *factorName; // ivar: _factorName
@property (readonly, nonatomic) NSString *namespaceName; // ivar: _namespaceName


+(id)factorRecordWithFactorName:(id)arg0 namespaceName:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFactorRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementFactorName:(id)arg0 ;
-(id)copyWithReplacementNamespaceName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFactorName:(id)arg0 namespaceName:(id)arg1 ;


@end


#endif