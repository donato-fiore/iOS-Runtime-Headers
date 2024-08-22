// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERPATHSASSERTION_H
#define PRSPOSTERPATHSASSERTION_H

@class BSAction, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRSPosterPathsAssertion : NSObject <NSSecureCoding>

 {
    BSAction *_invalidationAction;
}


@property (readonly, nonatomic) NSArray *paths; // ivar: _paths


+(BOOL)supportsSecureCoding;
-(id)_initWithPaths:(id)arg0 invalidationAction:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaths:(id)arg0 ;
-(id)initWithPaths:(id)arg0 queue:(id)arg1 invalidationHandler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateWithResponder:(id)arg0 ;


@end


#endif