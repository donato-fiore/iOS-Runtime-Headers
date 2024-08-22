// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERNOCSTRUCT_H
#define MTROPERATIONALCREDENTIALSCLUSTERNOCSTRUCT_H

@class NSNumber, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterNOCStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (copy, nonatomic) NSData *icac; // ivar: _icac
@property (copy, nonatomic) NSData *noc; // ivar: _noc


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif