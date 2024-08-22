// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOPERATIONALCREDENTIALSCLUSTERNOCRESPONSEPARAMS_H
#define CHIPOPERATIONALCREDENTIALSCLUSTERNOCRESPONSEPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPOperationalCredentialsClusterNOCResponseParams : NSObject

@property (retain, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *statusCode; // ivar: _statusCode


-(id)init;


@end


#endif