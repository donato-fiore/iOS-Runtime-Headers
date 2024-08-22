// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHLOCALIDENTIFIERMAPPING_H
#define PHLOCALIDENTIFIERMAPPING_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface PHLocalIdentifierMapping : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier


-(id)initWithLocalIdentifier:(id)arg0 error:(id)arg1 ;


@end


#endif