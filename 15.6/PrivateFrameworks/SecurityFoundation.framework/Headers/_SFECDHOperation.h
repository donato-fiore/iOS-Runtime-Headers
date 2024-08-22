// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFECDHOPERATION_H
#define _SFECDHOPERATION_H

@class NSString;
@protocol SFKeyDerivingOperation;

#import <Foundation/Foundation.h>


@interface _SFECDHOperation : NSObject <SFKeyDerivingOperation>

 {
    id *_ecdhOperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mode;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSInteger)_defaultMode;
+(NSInteger)keySource;
+(id)_defaultOperation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deriveKeyWithSpecifier:(id)arg0 fromKeySource:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif