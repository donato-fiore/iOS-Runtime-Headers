// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOPERATIONALCREDENTIALSCLUSTERNOCSTRUCT_H
#define CHIPOPERATIONALCREDENTIALSCLUSTERNOCSTRUCT_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPOperationalCredentialsClusterNOCStruct : NSObject

@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSData *icac; // ivar: _icac
@property (retain, nonatomic) NSData *noc; // ivar: _noc


-(id)init;


@end


#endif