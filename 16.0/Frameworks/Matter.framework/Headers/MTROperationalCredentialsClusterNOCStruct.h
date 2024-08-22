// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERNOCSTRUCT_H
#define MTROPERATIONALCREDENTIALSCLUSTERNOCSTRUCT_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterNOCStruct : NSObject

@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSData *icac; // ivar: _icac
@property (retain, nonatomic) NSData *noc; // ivar: _noc


-(id)description;
-(id)init;


@end


#endif