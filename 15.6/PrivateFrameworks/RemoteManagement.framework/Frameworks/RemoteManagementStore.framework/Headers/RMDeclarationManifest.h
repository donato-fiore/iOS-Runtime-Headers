// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMDECLARATIONMANIFEST_H
#define RMDECLARATIONMANIFEST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RMDeclarationManifest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *activations; // ivar: _activations
@property (readonly, copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, copy, nonatomic) NSArray *configurations; // ivar: _configurations
@property (readonly, copy, nonatomic) NSArray *management; // ivar: _management


+(BOOL)supportsSecureCoding;
+(id)declarationManifestWithDeclarations:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToManifest:(id)arg0 ;
-(id)initWithActivations:(id)arg0 configurations:(id)arg1 assets:(id)arg2 management:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif