// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BAGRESOURCEUPDATECONTEXT_H
#define BAGRESOURCEUPDATECONTEXT_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BAGResourceUpdateContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSUInteger loadState; // ivar: _loadState


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLoadState:(NSUInteger)arg0 error:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif